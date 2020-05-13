#include <iostream>
#include <cmath>

bool is_monotone_progression (int*arr, int size)
{
    int d = std::abs (arr[0] - arr[1]);
    for (int i = 2; i != size; ++ i)
    {
        if (std::abs(arr[i] - arr[i - 1]) != d)
        {
            return true;
        }
    }
    return false;
}

template < class Iterator >
void comb_sort (Iterator first, Iterator last)
{
    double fact = 1.24;
    int step = (last - first) - 1;
    while (step >= 1)
    {
        for (Iterator i = first; i + step != last; ++i)
        {
            if (*i < *(i + step))
            {
                std::swap(i, i + step);
            }
            step /= fact;
        }
    }
}

template < class Matrix >
void matr ( Matrix m, int size1, int size2)
{
    for (int i = 0; i != size1; ++ i)
    {
        for (int j = 0; j != size2; ++ j)
        {
            std::cout << m [i][j];
        }
    }
}

template < class Matrix >
void matrix (Matrix m1, int size)
{
    int temp = 0;
    for (int i = 0; i != size; ++ i)
    {
        temp += m1[i][size - i - 1];
    }
    std::cout << temp ;
}

int main()
{
    int arr [5] = {1, 2, 3, 4, 5};
    return 0;
}
