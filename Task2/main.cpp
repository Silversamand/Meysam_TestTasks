std::string GenerateHash();
void VerifyHash(const std::string& hash);

std::string g_hash;

void Producer()
{
    for (;;)
    {
        g_hash = GenerateHash();
    }
}

void Consumer()
{
    for (;;)
    {
        VerifyHash(g_hash);
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
