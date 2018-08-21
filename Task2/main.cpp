std::string GenerateHash();
void VerifyHash(const std::string& hash);

std::string g_hash;
std::mutex     mxLock;
void Producer()
{
    for (;;)
    {
        mxlock.lock();
        g_hash = GenerateHash();
        mxlock.unlock();
    }
}

void Consumer()
{
    for (;;)
    {
        mxlock.lock();
        VerifyHash(g_hash);
        mxlock.unlock();
    }
}

int main()
{
    std::thread t1(Producer);
    std::thread t2(Consumer);
    
    // ...
    
    t1.join();
    t2.join();
}
