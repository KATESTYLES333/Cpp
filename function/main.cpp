#include <iostream>
#include <cmath>
#include <vector>

using Unary_function = double (*)(double);
using Ternarn_function = double (*) (double, double, Unary_function);

double z_x1(double x, double y, Unary_function f)
{
       return std::pow (f(x) + y, 2) - std::cbrt (std::abs(f(x)));
}

double z_x2(double x, double y, Unary_function f)
{
    return std::pow (f(x) + y, 2) + sin (x);
}

double z_x3 (double x, double y, Unary_function f)
{
    return std::pow (f(x) + y, 2) + std::pow (y, 3);
}

int main()
{
    std::vector <Unary_function> f_x
    {
        [](double x){return std::pow (x,2);},
        [](double x){return ((pow (x, x) - pow (x, -x)/2));},
        [](double x){return std::exp(x); }
    };
    return 0;
    std::vector <Ternarn_function> op {z_x1, z_x2, z_x3};

}
