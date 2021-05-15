#include "basic.hpp"

int main()
{
    int a = 10;
    basicmath t(a);

    t.exponent(3);
    std::cout << a << std::endl;
}