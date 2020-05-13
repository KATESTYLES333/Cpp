#include <iostream>
#include <vector>

struct Accumulate
{
    int value = 0;
    void operator() (int v)
    {
        value += v;
    }
    Accumulate () = default;
    Accumulate (int val)
    {
        value = val;
    }
};

struct Generate
{
    int value = 1;
    int operator ()()
    {
        value += 2;
        return value;
    }
    Generate (int v)
    {
        value = v;
    }
};

namespace stu
{
template <class Iter, class Generator>
void generate(Iter first, Iter last, Generator g)
{
    for ( ; first != last; ++first)
    {
        *first = g();
    }
}

template<class ForwardIt, class Functor>
Functor for_each(ForwardIt first, ForwardIt last, Functor f)
{
    for (; first != last; ++ first)
    {
        f(*first);
    }
    return f;
}

struct  Functor_task1 // for for_each
{
    int value = 1;
    Functor_task1 () = default;
    Functor_task1 (int v):value (v) {};
    void operator () (int& v)
    {
        v =  value;
        value += 2;
    }
};

struct Functor_task2 // for generate
{
    int value = 0;
    Functor_task2() =  default;
    Functor_task2 (int v):value (v) {};
    int operator ()()
    {
        value += 2;
        return value;
    }
};

//massiv stepenyami 2
template<class ForwardIt>
void f2(ForwardIt first, ForwardIt last)
{
    int temp = 1;
    stu::for_each(first, last, [&temp](int& v)
    {
        v = temp;
        temp *= 2;
    });
}

//massiv arithmetic progression
template<class Iter>
void arithmetic_progression(Iter first, Iter last, int a, int d)
{
    int temp = 0;
    for ( ; first != last; ++ first)
    {
        *first = a + temp * d;
    }
}

void ar_prog(int*arr, int size, int a, int d)
{
    for ( int i = 0; i != size; ++ i)
    {
        arr[i] = a + i * d;
    }
}

bool is_palendrome (int*arr, int first, int last)
{
    --last;
    for (int i = first; i != last; ++ i, -- last)
    {
       if (arr[i] != arr[last])
       {
           return false;
       }
    }
    return true;
}
}



struct Sum
{
    int value = 0;
    Sum() = default;
    Sum(int v):value(v) {};
    void operator ()(int v)
    {
        value += v;
    }
};


int main()
{
    Accumulate a(4);
    Accumulate a1(100);
    int size (10);
    int array[10] ;
    for (int i = 0; i != size; ++i)
    {
        a1(array[i]);
    }
    std::cout << a1.value << std::endl;

    std::cout << std::endl;
    std::vector <int> b(10);
    stu::generate(b.begin(), b.end(),Generate(10));
    for (auto i = b.begin(); i != b.end(); ++ i)
    {
        std::cout << *i <<std::endl;
    }
    std::vector <int> c(10);
    int temp = 0;
    stu::generate(c.begin(),c.end(),[&temp]()
    {
        return temp ++;
    });
    std::cout << std::endl;

    std::vector<int> v (10);
    stu::for_each(v.begin(), v.end(),[](int v)
    {
        std::cout<< v << " ";
    });
    std::cout << std::endl;

    Sum result = stu::for_each(v.begin(), v.end(), Sum());
    std::cout << result.value;

    return 0;
}
