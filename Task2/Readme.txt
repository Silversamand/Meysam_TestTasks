We need to implement console multithreaded application that generates and processes some hashes. Hash generation could take some time, as well as hash verification.
We have created initial version of code that seems to not work in some cases.
Also, for now, there is just one thread that generates hash and just one thread that verifies. Later, we want to add N generators and M verifiers.
So we need you to fix existing issues, rewrite the problematic code and, possibly, prepare OOP design to be reused in some other application (for example, UI application).