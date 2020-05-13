#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

struct List
{
    int el;                                              //�������������� �������
    List *Next, *Head;                                   //������ ����� � ��������� �� ��������� �������
};

//������� ���������� �������� � ����
void Add(int el, List *&MyList)                          //��������� ������� ����� � ��������� �� ����, ��� ���� �������, ��� ����������� ��������� ����� ��� �� ���� ����������
{
    List *temp = new List;                              //�������� ������ ��� ������ ��������
    temp->el = el;                                        //���������� � ���� el ����������� � ������� ������� el
    temp->Next = MyList->Head;                          //���������, ��� ��������� ������� ��� ����������
    MyList->Head = temp;                                //�������� ������ �� ������� ������
}

/*������� ����������� �����*/
void Show(List *MyList)                                 //����� ������ ��� ����
{
    List *temp = MyList->Head;                          //��������� ��������� � ��������� ���, ��� ��� ������� � ������ �����
    //� ������� ����� �������� �� ����� �����
    while (temp != NULL)                                //������� ��� ������� � ������ �����
    {
        std::cout << temp->el << " ";                         //������� �� ����� ������� �����
        temp = temp->Next;                              //��������� � ���������� ��������
    }
}

/*������� �������� ����� �� ������*/
void ClearList(List *MyList)
    {
    while (MyList->Head != NULL)                        //���� �� ������ �� �����
    {
        List *temp = MyList->Head->Next;                    //��������� ���������� ��� �������� ������ ���������� ��������
        delete MyList->Head;                                //����������� ����� ������������ ������
        MyList->Head = temp;                                //������ ����� �� ���������
    }
}

template <class Iterator>
bool is_valid_brackets(Iterator first, Iterator last)
{
    using value_type = typename std::remove_reference <decltype(*first)>::type;
    std::stack <value_type> st;
    for(; first != last; ++first)
    {
        if(*first == '(')
        {
            st.push(*first);
        }
        if(*first == ')')
        {
            if(st.empty() || st.top == ')')
            {
                return false;
                st.pop();
            }
            return st.size() == 0;
        }
    }
}

struct Generator //���������� �����
{
    int m_start;
    int m_step;
    Generator (int step = 1, int start = 0):m_start(start), m_step(step){}

    int operator()()
    {
        m_start += m_step;
        return m_start;
    }

};

template <class InputIt, class Generator>
void generate1(InputIt first, InputIt last, Generator g)
{
    for(; first != last; ++first)
    {
        *first = g();
    }
}

int main()
{
    std::vector<int> a(100);
    generate1(a.begin(), a.end(), Generator(5,0));
    //������������� ������������������ � ��������� ����������, ������� ��� �����������
    int result = std::count_if(a.begin(), a.end(),[](int v){return v % 5 == 0;});
    std::stack<int> st;
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        st.push(*i);
    }
    while (st.size())
    {
        int temp;
        if(st.top() % 5 == 0)
        {
            ++temp;
        }
        st.pop();
    }

    List *MyList=new List; //�������� ������ ��� �����
    MyList->Head=NULL; //
    for (int i = 0; i < 5; ++i) Add(i,MyList); //������� ������ � ����
    Show(MyList); //����������

    ClearList(MyList); //
    delete MyList->Head;
    delete MyList;
    return 0;
}
