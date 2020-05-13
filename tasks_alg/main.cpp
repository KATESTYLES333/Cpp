#include <iostream>
#include <cmath>
#include <algorithm>

template <class Iter>
int f2(Iter first, Iter last)
{
    for(; first != last; ++first)
    {
        if(std::abs(*first) <= 1)
        {
            *first = 0;
        }
    }
}

template <class Iter>
void print_arr(Iter first, Iter last)
{
    for(; first != last; ++first)
    {
        std::cout << *first << " ";
    }
}

template <class Iter>
void f33(Iter first, Iter last)
{
    for(; first != last - 1; ++first)
    {
       std::swap(*first, *(first -1));
    }
}

template <class T,class Iter>
auto min_el(Iter first, Iter last)
{
    T min = 0;
    for(; first != last; ++first)
        {
        if(*first > min)
        {
            min = first;
        }
    }
}

template <class Iter>
void f3(Iter first, Iter last)
{
    for( ; first != last - 1; ++first)
    {
        swap(*first, *(first + 1));
    }
}

void f4(int*arr, int size)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = 0; j != size - 1 - i; ++j)
        {
            if(arr[j] < arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}


template <class Iter>
int f5(Iter first, Iter last)
{
    int* temp = min_element(first, last, [](int a, int b){return abs(a) < abs(b);});
    int counter = 0;
    for( ; first != last; ++first)
    {
        if(*first == *temp)
        {
            ++counter;
        }
    }
    return counter;
}


template <class Iter>
bool f6(Iter first, Iter last)
{
    for( ; first != last; ++first)
    {
        if(*first == 0)
        {
            return false;
        }
    }
    return true;
}

template <class Iter>
int f6_1(Iter first, Iter last)
{
    int temp = f6(first, last);
    return temp;
}




int main()
{
    int arr[6]{1,9,3,0,4,9};
    //f3(arr, arr + 6);
    //bubble_sort(arr, 6);
    //cout << f5(arr, arr + 6);
    //print_arr(arr, arr + 6);
    std::cout << f6_1(arr, arr + 6);
    f33(arr, arr + 6);
    print_arr(arr, arr + 6);
    return 0;
}




