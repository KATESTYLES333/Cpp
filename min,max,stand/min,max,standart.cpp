#include <iostream>
#include <cmath>
#define P 3.14
using namespace std;
/*int poledrome (int*arr, int size)
{
    int j = size-1;
    for (int i=0, i<j,++i,--j)
    if (arr[i]!=arr[j])
        return false;
    return true;
}

int min (int first,int last,int*arr,int size)
{
    int max_element=arr[0];
    int index=0;
    for (int i=1;i<size;++i)
        if(arr[i]>max_element)
        max_element=arr[i];
        index =i;
    return index
}
//������ � ��������� (��������� �� ����,��������� � � �,����� ��� ������ �,��������� � � � (��� ��� ������� ��� �)
int m(int*arr,int i,int size)
{
    int index=i++
    int max_element=arr[i]
    for( ;i<size;++i)
        if (arr[i]>max_element)
    max_element=arr[i];
    index =i
}
int max (int*array,int size)
{
    int min_element=array[0];//c������ ���������� � �������� ���� 1-��� ��������
    int index=0;//�������� ������� �� ������ ��������� � ���������� � �������
{ for(int i=1;i<size;++i)
         {if(array[i]>min_element)
        min_element=array[i];
        index =i;}
    return index;
}}

int min (int*array,int size)
{
    int min_element=array[0];//c������ ���������� � �������� ���� 1-��� ��������
    int index=0;//�������� ������� �� ������ ��������� � ���������� � �������
{ for(int i=1;i<size;++i)
         {if(array[i]<min_element)
        min_element=array[i];
        index =i;}
    return index;
}}
//c������� �������������� ���� ��������� �������

int abs(int value)
{
    if (value>0)
        {return value;}
        return -value;
    }

int square(int a)
return a*a;
 //������� ,������� ��������� ����� �� ��������
 bool is_even(int k)
 return k%2==0;

bool f(int a)
{
    return (a%2==0 && a>0)

}
//����� ������ ������������ � ������� ���� ������������
bool f1(int a)
return a>0 ^ b>0;
// ���� �� 1 ����� ������������
bool f2(int a, int b)
return a>0 && b>0;
//3 ����� ����� ����� �����
if (a==b && b==c&& a==c);
//�������� �����
int i=1000
while(i>1000)
{
i=i/1000
}
//������������ ���� �����
int product(int value)
int temp=1 //�����������,�������� ��� �������
for( ;value,value!=10)
    temp *=value%10;
return temp
//���������� ����� � �������
int pow(int a,int p)
{int temp=1;
for (int i=0,i<p,++i)
   { temp=temp*a;
    return temp;}
}
//����� ��������� �����
int factorial(int a)
int temp=1;
for(int i=2,i<=a,++i)
    temp=temp*i;
    return temp;
    //������� �� ����� ������� ������
void pow(int t)
{ int temp=1;
    for (int i=0,i<t,++i)
        cout<<temp<<endl;
    temp*=2;
}//��� ����� �������� ��� ���
void pow(int value)
{
    for(int i=1,i<t,i=i*2)
        cout<<i<<endl;
}
//������� 2 � ���������(�� first �� last)
void pow(int first,int last,int value)
{
    for( ;first<last;++first);
    {
        pow(2,first);
    }
}
//for3
void f(int fisrt,int last)
for( ;first<last;++first)
    cout<<first<<endl;
//������ �� �������
int find(int*arr,int first,int last)
int index=first;
int element=arr[first];
for( ;first<last;++first)
{
    if (arr[first]>element)
    { index=first;
    element=arr[first]
    }
}
//����� ����� ��������� �������
int f(int*arr,int size)
int temp=0;
for(int i=0,i<size,++i);
{temp=temp+arr[i];
}
//����� ����� ������ ��������� �������
int f(int*arr,int size)
if (arr[i]%2!=0)
{return false}
int temp=0;
for(int i=0,i<size,++i);
{temp=temp+arr[i];
}
//
int f(int*arr,int first,int last)
int temp=0
for ( ;first<last;)
    //���� �� 1 ������� ������� ������������ ������-���� ��������
using Unary Predicate=bool(*)(int)
bool any_of(int*arr,int first,int last,Unare Predicate p)
{
    for ( ;first<last;++first)
    {
        if(p(is_even))
    }
    return true;
    return false;
}
using binary_operation=int(*)(int,int)
bool accumulate(int*array,int first,int last,binary operation)
{ int temp=0;
    for( ;first<last;++first)
    {
        temp=sum(temp,array[first]);
    } return temp;
}
//������� �������������� ���� ��������� �������
int average(int*arr,int first,int last)
int temp=accumulate(arr,0,10,sum);
return temp/(last-first)
//
fu(int*arr,int first,int last)
int min=digit(arr,first,last,less);
int max=digit(arr,first,last,greater);
return accumulate (arr,min,max);
//
using BP=bool(*)(int,int)
bool greater(int a,int b)
return a>b;
//
usingBP=bool(*)(int,int)
bool greater_abs(int a,int b)
{ return std::abs(a)>abs(b);
}
int f(int*arr,int first,int last)
{
    int min_i=digit(arr,first,last,less);
    int max_i =digit(arr,first,last,greater);
    return accumulate (arr,min_i,max_i sum);
}
//����� ����� �� 0 �� ������� �����
int find(int*array,int first,int last,int f_el)
{
 for( ;first<last;++first)
 { if(arr[first]==f_el);
    return first;}
    return first -1;}
}
//����� ����� ��������� ������� ������������� ����� ������� ����� 0(������� � ������� ��������)
int star=find(arr 0,10 99)
int fin=find(arr,start+1,10 99);
accumulate(arr,start,fin,sum);

bool f(int a)
{
    return ( a%10==5 || a%10==3);
}
//���� ����� �������� �������������,� ������ �������������
bool f2(int a,int b)
{
    return (a>0)^(b<0);
}
*/
//�������
int f3(int row,int column)
{
    for( int i=0;i<column;++i)
    {
        for (int j=0;j<row;++j)
        {
            cout<<"*";
        }
    }cout<<endl;
}

int main()
/*
    int array [6] {3,4,2,1,6,8};
    int res= max(array, 6);
    cout << res << endl;
    int res2= min(array, 6);
    cout << res2 << endl;
    */
int f=f3(10,10);
return 0;
