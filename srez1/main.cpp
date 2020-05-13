#include <iostream>
#include <algorithm>
#include <cmath>
#define print_arr(first, last) std::for_each (first, last, [](int a) {std::cout << a << " ";});
// var 1
/*void fibonacci(int* arr, int size, int a, int b)
{
    arr[0] = a;
    arr[1] = b;
    for (int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] * arr[i - 2];
    }
}

double math_function (double x)
{
    return -(std::pow(x, 2) + 9 / std::tan(std::sqrt(x)));
}

bool min_el(double a, double b)
{
    return math_function(a) < math_function(b);
}

template <class Iter, class BO>
Iter min_ell(Iter first, Iter last, BO p)
{
    Iter min_el = first;
    for (; first != last; ++first)
    {
        if(p(*first, *min_el))
        {
            min_el = first;
        }
    }
    return min_el;
}

int min_elemen (int* arr, int size)
{
    int min_el = arr[0];
    for (int i = 0; i != size; ++i)
    {
        if (min_el > arr[i])
        {
            min_el = arr[i];
        }
    }
    return min_el;
}

int max_elemen (int* arr, int size)
{
    int max_el = arr[0];
    for (int i = 0; i != size; ++i)
    {
        if (max_el < arr[i])
        {
            max_el = arr[i];
        }
    }
    return max_el;
}

template<class Matrix>
void min_max_row(Matrix m, int column, int row)
{
    for (int i = 0; i != column; ++i)
    {
        std::cout << min_elemen(*(m + i), row);
        std::cout << max_elemen(*(m + i), row);
    }
}
//2 variant
void sum_fib(int* arr, int size, int a, int b)
{
    arr[0] = a;
    arr[1] = b;
    for (int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

double math1(double x)
{
    return std::pow(1, std::sin(x / 8));
}

bool is_true(double x)
{
    return math1(x) >= 0;
}

int sum (int*arr, int size, int init)
{
    for (int i = 0; i != size; ++i)
    {
        init += arr[i];
    }
    return init;
}

template <class Matrix>
void sum_all_row(Matrix m, int column, int row)
{
    int counter = 0;
    for (int i = 0; i != column; ++i)
    {
        std::cout << accumulate(*(m + i), row, counter);
    }
}

// var 3

void fib(int* arr, int size)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] + arr [i - 2];
    }
}

double math2(double x)
{
    return std::log10(std::pow(x, 2) + 2 * x + 2);
}

bool no_zero(double a)
{
    return math2 (a) != 0;
}

template <class Iter, class UP>
int accum(Iter first, Iter last, UP p)
{
    int counter = 1;
    for (; first != last; ++first)
    {
        if (p(*first))
        {
            counter *= *first;
        }
    }
    return counter;
}

int accum_sum(int* arr, int size, int init)
{
    for (int i = 0; i != size; ++i)
    {
        init += arr[i];
    }
    return init;
}

int accum_mul(int* arr, int size, int init)
{
    for (int i = 0; i != size; ++i)
    {
        init *= arr[i];
    }
    return init;
}

template<class Matrix>
void sum_op(Matrix m2, int column, int row)
{
    for (int i = 0; i != column; ++i)
    {
        std::cout << accum_sum(*(m2 + i), row, 0) << std::endl;
        std::cout << accum_mul(*(m2 + i), row, 0) << std::endl;
    }
}

// var 4

template<class Iter>
void geometry_progression(Iter first, Iter last, int a, int d)
{
    int temp = 0;
    for ( ; first != last; ++ first, ++temp)
    {
        *first = a * std::pow(d, temp);
    }
}

double math3(double x)
{
    return std::pow (std::cos(1 - std::sqrt(2, x)), 2);
}

bool f(double a, double b)
{
    return math3(a) > math3(b);
}

template<class Iter, class BP>
int max_ell(Iter first, Iter last, BP p)
{
    Iter max_elll = first;
    for (; first != last; ++first)
    {
        if(p(*first, max_elll*))
        {
            max_elll = first;
        }
    }
    return max_elll;
}
*/
template <class Matrix>
void matr1(Matrix q, Matrix q_d, int size)
{
    for (int i = 1; i_d = 0; i != size; ++i_d)
    {
        for (int j = 0; j != size; ++j)
        {
            q_m[i_d][j] = q[i][j];
        }
    }
}
*/

// var 5
// A, A + d
void arithmetic_progression (int* arr, int size, int a, int d)
{
    for (int i = 0; i != size; ++i)
    {
        arr[i] = a + i * d;
    }
}

int math5(int x)
{
    return std::sqrt(1 - std::log10(2 * x)) / -4 * std::sin (std::pow(x, 2));
}

bool is_even_max (int a, int b)
{
    return math5(a) % 2 == 0 && math5(b) % 2 == 0 && math5(a) > math5(b);
}

template<class Iter, class BP>
Iter max_el(Iter first, Iter last, BP p)
{
    Iter max_ = first;
    for ( ; first != last; ++first)
    {
        if (p(*first,*max_))
        {
            max_ = first;
        }
    }
    return max_;
}

template<class Matrix>
std::vector<int> triangle(Matrix m, int column, int row)
{
    std::vector<int> v;
    for (int i = 0; i != column; ++i)
    {
        for (int j = 1 + i; j != row; ++j)
        {
            v.push_back(m[i][j]);
        }
    }
    return v;
}

//var 6

void pow_two(int* arr, int size)
{
    for(int i = 0; i != size; ++i)
    {
        arr[i] = std::pow (2, i);
    }
}

double math6(double x)
{
    return std::sqrt(std::pow(x, 2) + std::tan(1 - 3 * x));
}

bool is_min(double a, double b)
{
    return math6(a) < math6(b);
}

template <class BP>
void matr(int* arr, int size, BP p)
{
    for(int i = 0; i != size; i += 2)
    {
        if(p(arr[i], arr[i + 1]))
        {
            std::cout << arr[i] << " ";
        }
    }
}

template<class Iter, class BP>
Iter min_ell(Iter first, Iter last, BP p)
{
    Iter min_elll = first;
    for (; first != last; first += 2)
    {
        if(p(*first, *min_elll))
        {
            min_elll = first;
        }
    }
    return min_elll;
}

template <class Matrix>
int n(Matrix n, int column, int row)
{
    int sum = 0;
    for (int i = 0; i != column; ++i)
    {
        for (int j = 1 + i; j != row; ++j)
        {
            sum += n[i][j];
        }
    }
    return sum;
}

int acc(int* arr, int size)
{
    int counter = 0;
    for(int i = 0; i != size; ++i)
    {
        counter += arr[i];
    }
    return counter;
}

template <class Matrix>
void sum_all_row(Matrix m, int N)
{
    int sum = 0;
    for(int i = 0; i != N; ++i)
    {
        std::cout << acc(*(m + i), N, sum);
    }
}
// var 7


int main()
{
    int arr[5] {2,1,5,2,6};
    acc(arr, 5);
    int N;
    int** mat = new int*[N];
    for(int i = 0; i != N; ++i)
    {
        mat = new int[N];
    }
    sum_all_row(mat, N);
    /*int arr[5] {};
    fibonacci(arr, 10, 2, 3);
    std::cout << *min_ell(arr, arr + 10, min_el) << " " <<std::endl;
    int m [2][2] {{8, 4}, {1, 7}};
    min_max_row(m, 2, 2);
    accum(arr, arr + 10, no_zero);
    sum_op(m, 2, 2);
    int arr2 [5]{1,2,6,86,5};
    pow_two(arr, 5);
    matr(arr2, 5, is_min);
    min_ell(arr, arr + 5, is_min);
    */
    int q[5]{1,5,3,5,2};
    matr1(q,q + 5, 10);
    /*int arr3[3][3] {{1,2,7}, {5,2,8}, {2,9,3}};
    auto result = n(arr3, 3, 3);
    std::cout << result;
    */
    return 0;
}
