#include <iostream>
#include <cstddef>
#include <initializer_list>
#include "list.h"
int main()
{
    stu::list<int> a{1,2,3,7,37,5}; // выведет 2
    std::cout << a.head->next->m_value;

    return 0;
}
