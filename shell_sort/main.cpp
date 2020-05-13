#include <iostream>

void shell_sort(int* arr, int size)
{
    for (int k = size / 2; k >0; k /= 2) //
    {
        for (int i = k; i < size; ++ i)
        {
           for (int j = i; j > 0 && arr[j] < arr[j - 1]; -- j)
           {
               std::swap (arr[j], arr [j - 1]);
           }
        }
    }
}
#define print_contener(first,last) std::for_each(first,last,[](int value){std::cout << value <<" ";});

int main()
{
    int arr [] {3, 8, 6, 9, 2, 7, 1, 5};
    shell_sort(arr, 8);
    std::cout << std::endl;
    return 0;
}
