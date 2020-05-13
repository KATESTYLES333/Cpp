#include <iostream>
/*
template < class Iterator >
void insert_sort (Iterator first, Iterator last)
{
    for ( ; first != last; ++first)

    {
        std::swap (std::min_element (*first, *last));
    }
}
*/
template < class Iterator >
void insert_sort (Iterator first, Iterator last)
{
    for (Iterator i = first; i != last; ++i)
    {
       Iterator min = i + 1;
        for ( Iterator j = i + 1; j != last; ++j)
        {
            if (* j < *min)
            {
                min = j;
            }
        }
        std::iter_swap (i, min);
    }
}

void selection_sort (int*array, int size)
{
    for ( int i = 0; i != size; ++ i)
    {
        for ( int j = 2; array [j] != array [j + 1]; --j)
        {
            std::swap (array[j], array [j + 1]);
        }
    }
}

template < class Iter >
void comb_sort (Iter first, Iter last)
{
    double fact = 1,24;
    int step = (last - first) - 1;
    while (step >= 1)
    {
        for (Iter i = first; i + step != last; ++ step)
        {
            if (*; <*(i + step))
            {
                std::Iter swap (i, i + step)
            }
        }
        step /= fact;
    }
}

template < class T, class Container = std::vector < T >>
class stack;
{
    Container m_cont;
public :
    T & top ( )
    {
        return m_cont.back ();
    }
}
};

bool empty ()
{
    return cont.empty ();
}

void push (const T & value)
{
    m_cont.push_back();
}
void pop ()
{
    return cont.pop_back();
}

int main()
{
    int arr[5] = {1, 2, 2, 1, 8};
    insert_sort(arr, arr + 5);
    int arr1[5] = {2, 4, 6, 8, 10};
    selection_sort(arr1, arr1 + 5);
    return 0;
    }
