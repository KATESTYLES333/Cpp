#include <iostream>
#include <vector>
#include <algorithm>

void print_even (int value)
{
      if (value % 2 == 0)
      {
          std::cout << value << " ";
      }
}

template <class Iterator, class UO>
void for_each (Iterator first, Iterator last, UO f)
{
    for (; first != last; ++ first)
    {
        f(*first);
    }
}

int main()
{
    /*
    int arr [5] {3, 2, 6, 9, 5};
    for (int* i = arr; i != arr + 5; ++ i)
    {
        std::cout << *i << std::endl;
    }
    */
    std::vector<int> temp1 (10);
    std::for_each(temp1.begin(), temp1.end(), [](int& v){std::cin >> v;});
    std::for_each(temp1.begin(), temp1.end(), [](int v){std::cout << v << " ";});
    std::cout << std::endl;
    std::for_each(temp1.begin(), temp1.end(),print_even);
    return 0;
}
