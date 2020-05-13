#include <iostream>
#include <vector>
#include <cmath>

template <class Iter>
Iter min_el (Iter first, Iter last)
{
    Iter min_ell = first ++;
    for ( ;first != last; ++ first)
    {
      if (*min_ell > *first)
      {
          min_ell = first;
      }
    }
    return min_ell;
}

template <class Iter>
bool is_all_positive (Iter arr, int size)
{
    for (int i = 0; i != size; ++ i)
    {
        if (arr[i] > 0)
        {
            return true;
        }
        return false;
    }
}

template <class Matrix>
void f (Matrix m, int row, int collumn)
{
    int counter = 0;
    for (int i = 0; i != collumn * row; ++ i)
    {
        if (is_all_positive(m[i], row * collumn))
        {
            ++ counter;
        }
    }
    std::cout << counter;
}

template <class Iter>
Iter max_el (Iter first, Iter last)
{
    Iter max_ell = first ++;
    for ( ;first != last; ++ first)
    {
      if (*max_ell < *first)
      {
          max_ell = first;
      }
    }
    return max_ell;
}

template <class Matrix >
/*void min_max (Matrix m, int row, int collumn)
{
    for (int i = 0; i != collumn; ++ i)
    {
        std::cout << min_el(m[i], row) << std::endl;
        std::cout << max_el(m[i], row) << std::endl;
    }
}
*/

void fibonacci (int* arr, int size)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 0; i != size; ++ i)
    {
        arr[i] = arr[i - 1] + arr [i - 2];
    }
}

void is_even (int* arr, int size)
{
    for (int i = 0; i != size; ++ i)
    {
        if (arr[i] % 2 != 0)
        {
            std::cout << arr[i] << " ";
        }
    }
}

void fill_array_even (int* arr, int size)
{
    int temp = 0;
    for (int i = 0; i != size; ++ i, temp += 2)
    {
        arr[i] = temp;
        std::cout << arr[i];
    }
}

void pow_two (int* arr, int size)
{
    for (int i = 0; i != size; ++ i)
    {
        arr[i] = std::pow (2, i);
        std::cout << arr[i];
    }
}

double math_f (double x)
{
    return std::sin (8 - std::sqrt(x)) / std::pow(x, 2) - 1;
}

bool pred (double x)
{
    return math_f(x) == 0;
}

template<class Iter>
double accumulate_x (Iter first, Iter last, int init)
{
    for (; first != last; ++ first)
    {
        if (pred(*first))
        {
            init += *first;
        }
    }
    return init;
}

void arithm_progression (int* arr, int size, int a, int b)
{
    for (int i = 0; i != size; ++ i)
    {
        arr[i] = a + b * i;
    }
}

void geometry_progression (int* arr, int size, int a, int b)
{
    for (int i = 0; i != size; ++ i)
    {
        arr[i] = a * std::pow (b, i);
    }
}

void matr (int** array, int m, int n)
{
    for (int i = 1; i != m; ++ i)
    {
        for (int j = 1; j != n; ++ j)
        {
            array[i][j] = 10 * i;
            std::cout << array[i][j] <<" " ;
        }
        std::cout << std::endl;
    }
}

int gcd(int a, int b)
{
    int c = 0;
    while (c = a % b)
    {
        a = b;
        b = c;
        c = a;
    }
    return c;
}

int main()
{
    std::cout << gcd(46, 2) << std::endl;
   /*int arr [7] {1, 2, 3, 6, 8, 89, 123};
   is_even(arr,7);
   std::cout << *min_el(arr, arr + 7);
   std::cout << std::endl;
   int m [2][3] {{2,5,3}, {4,3,8}};
   */
    return 0;
}
