#include <iostream>
#include <cmath>
using namespace std;
void f29(int value)
{
    if (value %2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"not_even";
    }
      std::cout<<std::endl;
      if (value ==0)
          return;
      if (value>0)
    {
        cout <<"positive"<<endl;
    }
    else
    {
        cout <<"negative"<<endl;
    }
    }
    void f4(int first,int last)
    {
        for( ;first<last;++first);
        cout <<first;
    }
int main ()
{
    f29(0);
    f4(3,4);
    return 0;
}
