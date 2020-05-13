#include <iostream>
#include <cmath>
using namespace std;
int f1(int value)
{
    if (value>0)
        {return value+1;}
        return value;
}
int f6(int a,int b)
{
  if(a>b)
  { return a;}
    return b;
}
int f11(int a,int b)
{{if (a!=b)
{return a=b; }
 {return b=a; }
}
{if (a==b)
{ return a=0;}
return b=0;
}}

int f12(int a,int b,int c)
{if(a<b)
{
if(a<c)
{
return a;
}
if(c<b)
{
return c;
}
else
{
if(b<c)
{
return b;
}
return c;
}
}}
int f15(int a,int b,int c)
{if(a<b)
{
if(a<c)
{
return b+c;
}
if(c<b)
{
return a+b;
}
else
{
if(b<c)
{
return a+c;
}
return a+b;
}
}
}
int main()
{
   int r=f1(10);
    cout << r << endl;
    int r1=f6(5,3);
    cout<<r1<<endl;
    int r2=f11(2,3);
    cout<<r2<<endl;
    int r3=f12(2,3,4);
    cout<<r3<<endl;
    int r4=f15(1,5,4);
    cout<<r4<<endl;
     return 0;
}
