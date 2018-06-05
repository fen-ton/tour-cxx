#include <iostream>
#include <math.h>
#include <iomanip>

/* Project Euler #3 - largest prime factor */
void print_all_factors(int n)
{
    for(auto i=2; i<=n; ++i)
        if(n % i == 0)
            std::cout<<i<<std::endl;
}

void print_all_prime_factors(int n)
{
    std::cout<<"Prime factors of "<<n<<" are:\n";
    for(auto i=2; i<=n; ++i)
        if(n % i == 0){
            std::cout<<i<<std::endl;
            n /= i;
        }
  
}

void print_all_prime_factors(double n)
{
    std::cout<<"Prime factors of "<<n<<" are:\n";
    for(auto i=2.0; i<=n; ++i)
        if(fmod(n,i) == 0.0){
            std::cout<<i<<std::endl;
            n /= i;
        }
    
  
}

int main()
{
    print_all_factors(37);
    print_all_factors(44);
    print_all_prime_factors(37);
    print_all_prime_factors(44);
    print_all_prime_factors(13195);
    print_all_prime_factors(600851475143.0);
    return 0;
}
