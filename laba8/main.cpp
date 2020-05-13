#include <cmath>
#include <iostream>
/*<template class Iterator,class UP>
using Unary Predicate=int (*)(int)
Iterator find_if (Iterator first,Iterator last,UP p)
 {
     for ( ;first<last;++first)
     {
         if (p(*first))
            return first;
     }
     return last;
 }
 int accumulate(int*first,int*last)
{
    int temp=0;
    for ( ;first<last;++first)
    temp+=*first;
}
return temp

int BO(int value1,int value2)
<template class T,class iterator>
T accumulate ( iterator first,iterator last,T temp,BO op)
{
    for ( ;first<last;++first)
        temp=op(temp,*first)
}
return temp

struct Point
{
    int x;
    int y;
};
Point()=default
Point(int x_,int y_)
{
    x=x_;
    y=y_;
}

int distance( Point a,Point b)
{
   return sqrt(pow((b.x-a.x),2)+pow(b.y-a.y,2))
}


Point array[3]{Point(1,2),Point1(3,4),Point2(5,6)}
{   double d;
    for (int i=0;i<2;++i)
    {
        d=distance(array[i],array[i+1])
    }
        d+=distance(array[2],array[0]);
}

//функция,которая вычисляет среднее арифметическое все элементы массива
int average(int*first,int*last)
{
    return accumulate(first,last,0)/(last-first);
}
void min(int*array,int size)

int min(int*arr)
{
	int min_el=arr[0];
	{
		for (int i=0;i<3;++i)
		{
			if (arr[i]<min_el)

		min_el=arr[i];
		}
	}
}


#include <iostream>
using namespace std;
int min8(int*array)
int main()
int f=min8([3][3])
{	int min_el=array[0];
	int matrix=[[1,2,3],[2,3,4],[1,4,2]];
	{
		for (int i=0;i<3;++i)
	}
	int min_el=array[i];
	return 0;
}


//laba 8
int main()
{
    int array[5][10]={{1,9,2,3,4,3,2,5,9,7},{5,9,2,4,8,5,3,9,4,7},{3,7,9,2,1,1,9,2,3,4},{3,2,5,9,7,5,9,2,4,8},{5,3,9,4,7,3,7,9,2,1}};
    int temp=1;
    for (int i=0;i<5;++i)
    {
        int min_element=array[0][i];
        for (int j=0;j<10;++j)
        {
            if (array[i][j]<min_element)
            {
                min_element=array[i][j];
            }
        }
        temp+=min_element;
    }
    std::cout<<temp<<std::endl;
}
*/
