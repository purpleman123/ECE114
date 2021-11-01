#include <iostream>
#include <iomanip>

int main()
{
    double d1 = 12.345;
    double d2 = 12.3456;
    double d3 = 12.34567;

    std::cout << std::fixed;
    std::cout << std::setprecision(0);
    std::cout << d1 << " " << d2 << " " << d3 << std::endl;
    std::cout << std::setprecision(1);
    std::cout << d1 << " " << d2 << " " << d3 << std::endl;
    std::cout << std::setprecision(2);
    std::cout << d1 << " " << d2 << " " << d3 << std::endl;
    std::cout << std::setprecision(3);
    std::cout << d1 << " " << d2 << " " << d3 << std::endl;
}
