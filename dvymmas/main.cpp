#include <iostream>
using namespace std;
int array[3][2]={{1,2},{2,3},{4,5}};
int main()
{   //int*array=new int[4];
    //int (*array)[3]=new int [5][3];
    int**array=new int*[4];
    {
        for (int i=0;i<3;++i)
        {
            array[i]=new int[3];
        }
    }
    delete []array[4];
    cout << array << endl;
    return 0;
}

int**array=new int*[5];
int**array1=new int*[10];
for(int i=0;i<col row;++i)

int main()
int(*array)[5]=new int*[5][5];
{
    for (int i=0;i<column;++i)
    {
        for(int j=0;j<row;++j)
        {
            cout<<array[i][j];
        }
    }
}
