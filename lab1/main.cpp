#include <iostream>
#define print_container(first, last) for_each (first, last,[](int a){std::cout << a << " " ;

template <class Iterator, class Unary_predicate>
void for_each (Iterator first, Iterator last,Unary_predicate p)
{
    for ( ; first != last; ++ first)
    {
        p(*first)
    }
    return p;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
