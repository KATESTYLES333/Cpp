#include <iostream>
#include <cmath>

bool p(int a,int b)
{
    return a!=b;
}
int main()
{   int arr[3][5]={{1,2,3,4,5},{6,7,8,9,11},{12,13,14,15,16}};
    int counter = 0;
    for (int i=0;i<3;++i)
    {
        for(int j=0;j<5;++j)
        {
            if (p(arr[i][j],arr[i][j+1]));
            ++counter;
        }

    }
    std::cout<<counter<<std::endl;
    return 0;
}

