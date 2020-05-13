#include <iostream>
#include <cmath>

int square_sum (int a)
{
    int temp = 0;
    for ( ; a != 0; a / 10)
    {
        temp += std::pow (a % 10, 2);
    }
    return temp;
}

void buble_sort (int*array, int size)
{
    for (int i = 0; i != size; ++ i)
    {
        for (int j = 0; j != size - 1 - i; ++ j)
        {
            if (array[j] > array [j + 1])
            {
                std::swap (array[j], array [j + 1]);
            }
        }
    }
}

template < class Iterator >
void buble_sort1(Iterator first, Iterator last)
{
    int size = last - first;
    -- last;
    for (int i = 0; i != size; ++ i)
    {
        for ( Iterator j = first; j != last - 1; ++ j )
        {
            if ( *j > *(j + 1))
            {
                Iterator swap (j, j + 1);
            }
        }
    }
}

int min (int* array, int size)
{
   int min_index = 0;
    for (int i = 0; i != size; ++ i)
    {
        if (array[i] > min_index)
        {
            min_index = array[i];
        }
        return min_index;
    }
}

template < class Iter >
Iter min_element (Iter first, Iter last)
{
    Iter find_el = first ++ ;
    for ( ; first != last; ++ first)
    {
        if (* first < find_el)
        {
            find_el = first;
        }
        return find_el;
    }
}

// insert sort
template <class Iter>
Iter insert_sort (Iter first, Iter last)
{
    for ( ;first != last; ++ first)
    {
        std::iter_swap(std::min(first, last), first);
    }
}

int insert_sort1(int *array, int size)
{
    int min_el;
    for (int i = 0; i != size; ++ i)
    {
        min_el = array[i + 1];
        {
            for (int j = i + 1; j != size; ++ j)
            {
                if (array[j] < array[min_el])
                {
                    min_el = j;
                }
                if (array [min_el] < array [i])
                {
                    std::swap (array[ min_el], array[i]);
                }
                return min_el;
            }
        }
    }
}

int sort1 (int*array, int size)
{
    for (int i = 1; i < size; ++ i)
    {
        for (int j = i; j > 0 && array[j - 1]; -- j)
        {
            std::swap (array[j], array [j - 1]);
        }
    }
}

int main()
{
    int array[10] = {23,546,24,97,32,79,55,83,369,2};
    sort1(array, 10);
    return 0;
}
