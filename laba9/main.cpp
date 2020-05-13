#include <iostream>
#include <cmath>

using namespace std;
double system(double x,double k,double h)
{   for (x=-1;x<=2;++h)
    {
    if (x>0)
    {
        int f=log(abs(sqrt(pow(x,3))));
    }
else
    {
        for(k=1;k<=9;++k)
        {
            int f1=pow(k,pow(x,2));
        }
    }
    }
}
int main()
{
    int g=system(3,2,0.15);
    cout << g<< endl;
    return 0;
}

