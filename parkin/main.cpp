#include <iostream>

using namespace std;

int ary[7][10]= {
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                {1,2,3,4,5,6,7,8,9,10},
                };
int fl,pl;
int yet=-1;


void schema()
{
cout<<"~~������� ���� �������� (0 - ����� �������������)~~\n\n";
    for (int i=0;i<7;i++)
    {
        cout<<i+1<<"-� ����: ";
        for (int j=0;j<10;j++)
        {
            cout<<" "<<ary[i][j]<<" |";
        }
        cout<<endl<<"--------------------------------------------------"<<endl;
    }
}

void RrtInPut()
{





bool fl_t=false, pl_t=false;

    while (!fl_t)
    {
        cout<<"������� ����� �����: ";
        cin>>fl;
        --fl;
        if (fl>8 || fl<0)
        cout<<"������ ����� ���! �������� ���� �� 1 �� 7!\n";
        else fl_t=true;
    }










    while (!pl_t)
    {
        cout<<"������� ����� ����� ��������: ";
        cin>>pl; --pl;
        if (pl>11 || pl<0) cout<<"������ ������ ���! �������� ����� �� 1 �� 10!\n";
        else pl_t=true;
    }


    if(ary[fl][pl]==0)
        {
            cout<<"����� ������! �������� ������!\n\n";
            schema();
        }
    else
        {
            ary[fl][pl]=0;
            cout<<"\n\n";
            cout<<"������������ ������ �������!\n"<<"���� ����� ��������: "<<++fl<<"-� ����, "<<++pl<<"-� �����!\n";
        }
cout<<"������������� ��� - ������� 1. ����� - ������ �����: ";
cin>>yet;
cout<<endl;
    if (yet==1) RrtInPut();

}


int main()
{
setlocale(LC_ALL, "Russian");

    schema();
    cout<<"����� ������������� ����� � ��������, �������� ���� � �����.\n";
    RrtInPut();

return 0;
}
