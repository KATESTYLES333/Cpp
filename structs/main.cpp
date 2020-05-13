#include <iostream>
struct Vector
{
    int*array;
    int m_size;
    int m_capacity;
    Vector (int s, int c)
    {
        m_size=s;
        m_capacity=c;
    }
    Vector()
    {
        m_size= 0;
        m_capacity= 100;
        array = new int;
    }
};
struct Point
{
    int x;
    int y;
    Point (int x_, int y_)
    {
        x=x_;
        y=y_;
    }
    Point()
    {
        x=0;
        y=0;
    }
};
struct Person
{
    int age;
    int f_name;
    int l_name;
    int weight;
    Person(int a, int f, int l, Int w)
    {
        age=a;
        f_name=f;
        l_name=l;
        weight=w;
    }
    Person()
    {
        age=16;
        f_name=WAsgen;
        l_name=Koko;
        weight=100;
    }
};
int main()
{
    Vector a(88, 7);
    std::cout << a.m_capacity << " " << a.m_size << std::endl;
    Point b(2, 3 );
    std::cout << b.x << " " << b.y << std::endl;
    Person ()
    std::cout <<
              return 0;
}

