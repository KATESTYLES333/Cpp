#include <iostream>
struct Fraction
{
    int m_num;
    int m_denum;
Fraction ()
{
    m_num = 0;
    m_denum = 1;
}
Fraction (int num, int denum)
{   m_num = num;
    m_denum = denum;
}
};

struct Sum_is_even
{
int result = 0;
Sum_is_even () = default;
void operator ( ) (int value)
    if ( value % 2 == 0)
    {
    result += value ;
    }
};
int array[10] {1,2,3,4,5,6,7,8,9,10}
Sum_is_even.sum
for (int i = 0; i < 10; ++i)
Sum (array [i])
};

int main()
{
    Fraction a (1,2);
    std::cout << a.m_denum <<" "<< a.m_num << std::endl;


    return 0;
}
