#include <iostream>
#include <cmath>

void f (int**array, int size_1, int size_2)
{
    for ( int i = 0; i != size_1; ++ i)
    {
        for ( int j = 0; j != size_2; ++ j)
        {
            if (array[i][j] > array [i][j + 1])
            {
                std::swap (array[i][j], array [i][j + 1]);
            }
        }
    }
}

void bubble_sort (int*array, int size)
{
    for(int i = 0; i != size; ++ i)
    {
        for (int j = 0; j != size; ++ j)
        {
            if (array[j] > array [j + 1])
            {
                std::swap (array[j], array[j + 1]);
            }
        }
    }
}

void bubble_sort_dvymmas (int** array, int size_1, int size_2)
{
    for (int n = 0; n != size_1 * size_2; ++ n)
    {
        for (int i = 0; i != size_1; ++ i)
        {
            for (int j = 0; j != size_2; ++ j)
            {
                if (array[i][j] != array[i][j + 1])
                {
                    std::swap (array[i][j], array [i][j + 1]);
                }
            }
        }
    }
}

template < class Matrix, class Unary_predicate>
void for_each_2d (Matrix m, int size_1, int size_2, Unary_predicate p)
{
    for (int i = 0; i != size_1; ++ i)
    {
        for (int j = 0; j != size_2; ++ j)
        {
            p (m[i][j]);
        }
    }
}

int average (int * array, int size)
{
    int temp = 0;
    for (int i = 0; i != size; ++ i)
    {
        temp += array[i];
    }
    return temp / size;
}



int main()
{
    int** m = new int*[2];
    for (int i = 0; i < 2; ++i)
    {
        m[i] = new int[2];
    }
    for_each_2d(m, 2, 2, [](int a){std::cout << a << std::endl;});
    for_each_2d (m, 2, 2, [](int a){std::cin >> a;});


    return 0;
}
