#include <iostream>
#include <vector>

void print_square(double);
double square(double);

int main()
{
    std::cout << "hello" << "\n";
    
    //const and constexpr
    const double N = 4.05;
    print_square(N);
    constexpr double r = 5; //why must this be a constexpr, not const?
    constexpr double rad = 3.145*r*r;
    
    //build in types
    std::cout << "sizeof(double)= " << sizeof(double) << "\n";
    int tr = square(N);
    std::cout << "Truncated int = " << tr << "\n";
    
    // list form of initialisation, auto
    std::vector<int> vec {2, 3, 4, 5};
    for(auto& a: vec) {
        ++a;
    }
    std::cout<< vec[0] << std::endl;
    
    int dbl {6}; // error if value a double, try it
    dbl++;
    auto a = dbl;
    std::cout << "size of a=" << sizeof(a) << std::endl;
    return 0;
}

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    std::cout << "The square of " << x;
    std::cout << " is " << square(x) << std::endl;
}
