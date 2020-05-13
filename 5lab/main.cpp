#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

struct List
{
    int el;                                              //информационный элемент
    List *Next, *Head;                                   //Голова стека и указатель на следующий элемент
};

//ФУНКЦИЯ ДОБАВЛЕНИЯ ЭЛЕМЕНТА В СТЕК
void Add(int el, List *&MyList)                          //Принимаем элемент стека и указатель на стек, при этом говорим, что принимаемый указатель будет сам по себе указателем
{
    List *temp = new List;                              //Выделяем память для нового элемента
    temp->el = el;                                        //Записываем в поле el принимаемый в функцию элемент el
    temp->Next = MyList->Head;                          //Указываем, что следующий элемент это предыдущий
    MyList->Head = temp;                                //Сдвигаем голову на позицию вперед
}

/*ФУНКЦИЯ ОТОБРАЖЕНИЯ СТЕКА*/
void Show(List *MyList)                                 //Нужен только сам стек
{
    List *temp = MyList->Head;                          //Объявляем указатель и Указываем ему, что его позиция в голове стека
    //с помощью цикла проходим по всему стеку
    while (temp != NULL)                                //выходим при встрече с пустым полем
    {
        std::cout << temp->el << " ";                         //Выводим на экран элемент стека
        temp = temp->Next;                              //Переходим к следующему элементу
    }
}

/*ФУНКЦИЯ УДАЛЕНИЯ СТЕКА ИЗ ПАМЯТИ*/
void ClearList(List *MyList)
    {
    while (MyList->Head != NULL)                        //Пока по адресу не пусто
    {
        List *temp = MyList->Head->Next;                    //Временная переменная для хранения адреса следующего элемента
        delete MyList->Head;                                //Освобождаем адрес обозначающий начало
        MyList->Head = temp;                                //Меняем адрес на следующий
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

struct Generator //заполнение стека
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
    //сгенирировать последовательность и посчитать количество, сколько раз встречается
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

    List *MyList=new List; //выделяем память для стека
    MyList->Head=NULL; //
    for (int i = 0; i < 5; ++i) Add(i,MyList); //заносим данные в стек
    Show(MyList); //отображаем

    ClearList(MyList); //
    delete MyList->Head;
    delete MyList;
    return 0;
}
