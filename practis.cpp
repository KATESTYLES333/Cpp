#include <iostream>
#include <cmath>

int reverse (int value)
{
    int temp = 0;
    for ( ; value; value /= 10)
    {
        temp *= 10;
        temp = temp + value % 10;
    }
}

void fibonacci (int times)
{
    int a = 0;
    int b = 1;
    int temp ;
    for ( int i = 3;i < times; ++i)
    {
        temp = a + b ;
        a = b;
        b = temp;
        std::cout << b << std::endl;
    }
}

int accumulate_digit (int a)
{
    int counter = 0;
    for ( ; a != 0; a /= 10)
    {
        counter += a % 10;
    }
        return counter;
}

int get_last_n_digit (int v, int n)
{
    return v % (int) std::pow(10, n);
}

int count_rangers (int value)
{
    int res = 0;
    for ( ; value; value /= 10)
    {
        ++ res;
    }
    return res;
}


template < class Iterator, class BP p>
bool b_all_of (Iterator first, Iterator last,BP p)
{
    for ( ;first != last; ++ first; -- last)
    {
        if (p(*first, *(first + 1)))
    }
    {
        return false;
    }
    return true;
}

/*Struct Integer
{
    int m_value;
    Integer operator + ( Integer * this, const Integer & that) const
    {
    return Integer (this -> value + that.value);
    Integer (int value = 0) : m_value (value)[];      // = Integer (int value)   {m_value = value;}
    }
Integer at (size_t n)
{
    return (m_value / (int) std::pow (10, n)) % 10;
}
}*/

int get_alfabet_vector( )
std::vector < Pair > result;
for ( char i = "A"; i < "Z" + 1; ++ i)
{
    result.push_back(pair <char, int>(i, 0));
}

Struct Pair
{
    char first;
    char second;
};

template < class Iterator >
std::vector < Pair > f (Iterator first, Iterator last)
{
    auto res = get_alfabet_vector();
    for ( ; first != last; ++ first)
    {
        auto temp = find_if (res.begin (), res.end [first] (Pair a){return a.first == *first;})
    }
    ++ temp -> second;
}
int main()
{
    int f = reverse(434);
    std::cout << f << std::endl;
    int f1 = accumulate_digit(143);
    std::cout << f1 << std::endl;
    return 0;
    int f2 = get_last_n_digit(2222, 235);
    std::cout << f2 << std::endl;
    int d = abs (array[1] - array [0])
    b_all_of(array.begin(), array.end(),[d](int a, int b) {return b - a != d;)}
}
