#include <iostream>
#include "whatever.hpp"
#include "awesome.hpp"

int main(void)
{
    Awesome a(2), b(4);
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    return (0);
}
