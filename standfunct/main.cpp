#include <iostream>
#include <cmath>
int f0(int a)
{
    if(a>0)
    {return a;}
    return -a;
}
bool f(int a,int b,int c)
{
    return a==b && b==c;
}
int f1(int a)
{
    return (a%10)+((a/10)%10);
}
bool f2(int v,int temp)
{
    int result =v/pow(10,temp);
    return result>0 && result<10;
}
int f3(int year)
{
    return (year-1)/100;
}
void f4(int first,int last)
    {
        for( ;first<last;++first);

    }
    int call_digit(int value)
    { int temp =0;
        for ( ;value!=0;value=value/10);
        ++temp;
    }
    void g(int v)
    {
        int temp=0;
        for( ;v!=0;v=v/10);
        temp=v%10+temp;
    }
int main()
{
    f0(-8);
    f(2,3,4);
    f1(5);
    f2(6,2);
    f3(1900);
    return 0;
}

