#include <iostream>
#include <cmath>

template <class Iter, class UP>
void for_each (Iter first, Iter last, UP p)
{
    for ( ; first != last; ++ first)
    {
        p(*first);
    }
}

int gcd (int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int main()
{
    std::cout << gcd(81, 27) ;
    return 0;
}
