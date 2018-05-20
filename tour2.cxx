#include <iostream>
#include <vector>

void add_one_vector(std::vector<int>& v)
{
    for(auto& a: v)
        ++a;
}

void add_one_array(int* ar)
{
    // std::cout << sizeof(ar) << "\n";
    // std::cout << sizeof(int*) << "\n";
    // size of ptr to int is 8 bytes
    for(int* p = ar; *p != 0; p++)
        (*p)++;
    // will *p always == 0 at the end of an array?
}

class Vector {
    public:
    Vector(int s) :elem{new double[s]}, sz{s} {}
    double& operator[](int i) { return elem[i]; }
    void add_one() {
        for(auto i=0; i<sz; ++i)
            ++elem[i];
    }
    void collect() {
        for(auto i=0; i<sz; ++i)
            std::cin >> elem[i];
    }
    double sum() {
        auto total = 0;
        for(auto i=0; i<sz; ++i)
            total += elem[i];
        return total;
    }
    int length() { return sz; }
    private:
    double* elem;
    int sz;
};

int main()
{
    std::vector<int> v {30, 40, 50, 60};
    add_one_vector(v);
    std::cout << v[0] << "\n";
    
    int a[] {30, 40, 50, 60, 70, 80, 90, 100, 110};
    add_one_array(a);
    std::cout << a[0] << "\n";
    
    Vector my_vec(5);
    for(int i=0; i < my_vec.length(); ++i)
        my_vec[i] = 30 + i;
    my_vec.add_one();
    std::cout << my_vec[0] << "\n";
    my_vec.collect();
    std::cout << "total=" << my_vec.sum() << "\n";
    return 0;
}