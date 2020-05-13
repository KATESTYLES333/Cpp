#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
#include <algorithm>

bool is_even(int value, int n)
{
    return value % n == 0;
}

template <class Iter>
void f10(Iter first, Iter last)
{
    std::for_each (first,last,[](int v){if(v % 2 == 0){std::cout << v <<" ";}});
    std::cout << std::endl;
    std::reverse(first, last);
    std::for_each (first,last,[](int v){if(v % 2 != 0){std::cout << v <<" ";}});
}


#endif // HEAD_H_INCLUDED
