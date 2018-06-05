#include <iostream>

/* Finas all prime numbers up to and including N */
int main() 
{
    const int N = 37;
    constexpr int SIZE = N+1;
    int* sieve {new int[SIZE]};
    for(auto i=1; i<SIZE; ++i)
        sieve[i] = i;
    for(auto i=2; i<SIZE/2; ++i)
        for(auto j=2*i; j<N+1; j+=i)
            sieve[j] = 0;
    for(auto i=1; i<SIZE; ++i)
        if(sieve[i] != 0)
            std::cout<<sieve[i]<<"\n";
    return 0;
}
