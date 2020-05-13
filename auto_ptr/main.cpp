#include <iostream>
#include <vector>

/*template <class Iter>
void f(Iter first, Iter last)
{
    using value_type = std::remove_reference <decltype(*first)>::type; // из reference в value
}
*/

template <class T>
struct reference_type
{
    using type = T;
};

template <class T>
struct reference_type<T&>
{
    using type = T;
};

template <class T>
struct reference_type<T&&>
{
    using type = T;
};

struct Test
{
    int value;
    Test()
    {
        std::cout << "Test()" << std::endl;
    }
    Test(int a)
    {
        value = a;
        {
            std::cout << "Test(int)" << std::endl;
        }
    }
    Test(const Test& that)
    {
        this->value = that.value;   // копирование
        {
            std::cout << "Test(int, int)" << std::endl;
        }
    }
    ~Test()
    {
        std::cout << "~Test" << std::endl;
    }
};

template <class T>
struct auto_ptr
{
    using element_type = T;
    using pointer = T*;
    pointer m_ptr;
    auto_ptr(pointer p = nullptr):m_ptr(p) {}

    pointer realese()
    {
        pointer temp = m_ptr;
        m_ptr = nullptr;
        return temp;
    }

    void reset(pointer p = nullptr)
    {
        if (p != nullptr)
        {
            delete m_ptr;
            m_ptr = p;
        }
    }

    auto_ptr(const auto_ptr& that):m_ptr(that.realese) {} // структура копирования

    ~auto_ptr()
    {
        delete m_ptr;
    }

    auto_ptr& operator=(const auto_ptr& that)
    {
       reset(that.realese());
       return *this;
    }

    element_type& operator*() //ссылка
    {
        return *m_ptr;
    }

    bool operator->()
    {
        return m_ptr;
    }

    void get()
    {
        return m_ptr;
    }
};

int main()
{
    // Test a; // находится в стеке
    // Test* p = new Test; //память не освобождаетс автоматически и нужен delete
    //delete p;
    Test* a = new Test;
    auto_ptr <Test> b (new Test());
    return 0;
}
