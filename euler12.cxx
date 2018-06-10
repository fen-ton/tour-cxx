/*
 * Project Euler #12
 * "Highly divisible triangle numbers"
 */
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

/* factorise using trial division */
std::vector<int> factorise(long int n)
{
    std::vector<int> results {};
    int limit = n;
    for(auto i=1; i<limit; ++i){
        if(n % i == 0){
            results.push_back(i);
            results.push_back(n / i);
            limit /= i;
        }
    }
    return results;
}

int count_factors(double n)
{
    int result = 0;
    int limit = n;
    for(auto i=1; i<limit; ++i){
        if(fmod(n,i) == 0){
            if(n / i != i)
                result += 2;
            else
                result += 1;
            limit /= i;
        }
    }
    return result;
}

int test()
{
    std::vector<int> r = factorise(28);
    for(auto& a : r)
        std::cout << a << " ";
    std::cout << std::endl;
    return 0;
}

int main()
{
    int size {0};
    int n {1};
    double t {0}; //the current triangle number
    int target = 23;
    while(size <= target){
        t += n;
        ++n;
        size = count_factors(t);
    }
    std::cout << t << " has more than " << target << " factors\n";
    

    return 0;
}
