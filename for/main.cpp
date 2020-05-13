#include <iostream>
template<typename Iterator>

int pow(int value,int p)
{
    int temp=1;
   {for(int i=0;i<p;++i)
   temp=temp*value;
}
}
//цикд,нечетными числами
void f(int first,int last)
{
    int temp=0;
    { if(first%2==0);
        ++first;
    {
        for( ;first<last;++first)
        cout<<first;
    }

}
}
//напечатть прайс лист(1 кг-50,2кг-100)
int h(int first,int last,int price)
{
    for( ;first<last;++first)
        cout<<first<<"kg "<<first*price;
}
int f39(int value,int first,int last,int temp)
{
    for( ;first<last;++first)
    pow(value,first);
}
//заполнить числами фибоначи
void fibonachi(int times)
{
 int a=0;
 int b=1;
 int c=a+b;
 {
     for (int i=0;i<times;++i)
        cout<<c;
     c=a+b;
     a=b=c;
 }
}
//8 задача FOR
 void f1(int first,int last)
 {
     int temp=1;
     for ( ;first<last;++first)
    temp=temp*first;
     cout<<temp;
 }
 //9 задача FOR
 int f2(int first,int last)
 {
     int temp=0;
     for( ;first<last;++first)
    temp=temp+pow(first,2);
     return temp;
 }
 //10
 double f3(double times)
 {double temp=0;
 for(double i=1;i<times;++i)
   { temp=temp+1.0/i;}
    return temp;
 }
 double f4(double times)
 {double temp=0;
 for(double i=1;i<times;i=i+0.1)
   { temp=temp+1.0/i;}
    return temp;
 }
 //13array
 void arr13(int*array,int first,int last)
 {
     for ( ;first!=last;last-2)
     cout<<array[last];
 }

void array17(Iterator first,Iterator last)
{
    for( ;first<last;++first)
}
int main()
{
    int pow1=pow(2,3);
    cout <<pow1<< endl;
    int h1=h(1,10,100);
    cout<<h1<<endl;
    int f=f39(2,3,8,1);
    cout<<f<<endl;
    int f1=f2(1,10);
    cout<<f1<<endl;
    double f2=f3(10);
    cout<<f2<<endl;
    double f3=f4(3);
    cout<<f3<<endl;
    return 0;
    }
