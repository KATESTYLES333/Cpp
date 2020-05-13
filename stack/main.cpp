#include <iostream>

template <class T, class Container = std::vector <T>>
struct Stack
{
    using value_type = Container::value_type;
    using size_type = Container::size_t;
    Container cont;
};

int main()
{

    return 0;
}
