#include <iostream>
#define sum (a, b) (a) + (b)
#define print (f, l) for _each (f, l)
int binary_search (int*array, int size, int key)
{
    int start = 0;
    int end = size-1;
    int m;
    while (start < end)
    {
        m = (start + end) / 2;
        if (array[m] == key)
        {
            return m;
        }
        if (array[m] > key)
        {
            start  = m +1;
        }
        if (array[m] < key)
        {
            end = m-1;
        }
    }
}
int *find (int *first, int * last, int key)
{
    for ( ;first != last; ++first )
    {
        if (*first == key)
        {
            return first;
        }
    }
    return last;
}

/*using Unary_Predicate
template <class UP>
bool f (int*array_2, int size, UP p)
{
    for (int i = 0; i != size; ++i)
    {
        if (!p(array_2[i]))
        {
            return false;
        }
        return true;
    }
}

template <class Iterator>
int count_max_elem (Iterator first, Iterator last)
{
    auto max_el_1 = *std::max_el_1(first, last);
    return std::cout(first, last, max_el);
}
*/
template <class Iterator >
void var1_1(Iterator first1, Iterator last1, Iterator first2, Iterator last2)
{
    int res1 = count_max_elem(first1, last1);
    int res2 = count_max_elem(first2, last2);
    if (res1 > res2)
    {
        std::for_each(first1,last1,[](int a){std::cout <<a});
    }
    else
    {
        print (first2, last2);
    }
}

template < class Iterator>
Iterator max_elemn (Iterator first, Iterator last)
{
    Iterator max_el = first++ ;
    for ( ; first != last; ++first)
    {
        if (*first>max_el)
        {
            max_el = first;
        }
    }
    return max_el;
}

template <class Iterator, class T>
void var_7 (Iterator first1, Iterator last1, Iterator first2, Iterator last2, T value)
{
    int res1 = std::count_if (first1, last1,[value](int a)return a> value;}); // в квадратн скобках ,что б было видно в анорн функции
    int res2 = std::count_if (first1, last1, [value](int a){return a > value});
    if (res1 < res2)
    {
        print(first1, last1);
    }
    else
    {
        print (first2, last2);
    }
}

template <class Iterator, class UP>
int count_if (Iterator first, Iterator last, UP p)
{
    int counter = 0;
    for ( ; first != last; ++ first)
    {
        if (p(*first))
        {
            ++ counter;
        }
    }
    return counter;
}

template <class matrix, class T>
int accumulate7_2(matrix m, int size1, int size2, T init)
for (int i = 0; i != size1; ++i)
{
    for (int j = 0; j != size1; ++j)
    {
        init += m[i][j];
    }
    return init;
}
template <class matrix, class T>
int average (matrix m, int size1, int size2, T init)
{
    accumulate (size1, size2,0)/(size1 * size2);
}

template <class matrix, class T>
void task_7(matrix m, int size1, int size2)
{
    T av = average (m, size1,size2)
    for (int i =  0; i != size; ++i)
    {
        for (int j = 0; j != size; ++j)
        {
            if (m[i][j] > av)
            {
                m[i][j] / av;
                std::cout << m[i][j] << std::endl;
            }
            else
            {
                std::cout << m[i][j] << std::endl;
            }
        }
    }
}

template <class Iterator, clas T>
T task_7(Iterator first, Iterator last, T init) //сумма четн эл массива
{
    std::for_each (first, last, [init](int a){if (a % 2 == 0){init +=a;}})
    return init
}

//поменять местами макс и мин эл массива
template <class Iterator>
void task (Iterator first, Iterator last)
{
    Iterator min_el = std::min_element (first, last);
    Iterator max_el = std::max_element (first, last);
    swap (min_el, max_el);
}

template <class Iterator, class T, class UP>
void task11 (Iterator first, Iterator last, T a, T b, UP p)
{
    std::for_each (first, last ,[a, b, p](int & value){if (p(value )}{value = a;else value = b;});
}

template <class Matrix, class T>
void f (Matrix m, int size, T init)
{
    int end = size-1;
    for ( int i = 0; i != size; ++i)
    {
        init += m[end - i][i];
    }
    return init;
}



int main()
{
    int array [10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ret = binary_search(array, 10, 5);
    int array_2 [3] {1, 2, 3};
    int res = f(array_2 ,3, 0);
    std::vector <int> v1 {1, 2, 2, 1, 1};
    std::vector <int> v2 {5, 5, 5, 1, 1};
    var1_1(v1.begin(), v1.end(), v2.begin(), v2.end ();
    std::cout << res << std::endl;
    std::cout << ret << std::endl;
    return 0;
}
