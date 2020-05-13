#include <iostream>
/*
template < class Iterator >
void insert_sort (Iterator first, Iterator last)
{
    for ( ; first != last; ++first)

    {
        std::swap (std::min_element (*first, *last));
    }
}
*/
template < class Iterator >
void insert_sort (Iterator first, Iterator last)
{
    for (Iterator i = first; i != last; ++i)
    {
       Iterator min = i + 1;
        for ( Iterator j = i + 1; j != last; ++j)
        {
            if (* j < *min)
            {
                min = j;
            }
        }
        std::iter_swap (i, min);
    }
}

template <class Iter>
Iter insert_sort (Iter first, Iter last)
{
    for ( ;first != last; ++ first)
    {
        std::iter_swap(std::min(first, last), first);
    }
}

void selection_sort (int*array, int size)
{
    for ( int i = 0; i != size; ++ i)
    {
        for ( int j = 2; array [j] != array [j + 1]; --j)
        {
            std::swap (array[j], array [j + 1]);
        }
    }
}

int binary_search (int* array, int size, int key)
{
    int start = 0;
    int end = size -1;
    int middle;
    while (start < end)
    {
        middle = (start + end) / 2;
        if (array[middle] == key)
        {
            return middle;
        }
        if (array[middle] > key)
        {
            end = middle -1;
        }
        if (array[middle] < key)
        {
            start = middle +1;
        }
    }
}

void bubble_sort(int* arr,int size)
{
    for(int i = 0; i != size; ++i)
    {
      for(int j = 0; j != size - 1 - i; ++j)
      {
          if(arr[j] > arr[j+1])
          {
             std::swap(arr[j], arr[j + 1]);
             std::cout << arr[i];
          }
      }
    }
}

int main()
{
    //int arr[5] = {1, 2, 2, 1, 8};
    //insert_sort(arr, arr + 5);
   // int arr1[5] = {2, 4, 6, 8, 10};
    //selection_sort(arr1, arr1 + 5);
    int arr[5] = {4,2,64,3,5};
    bubble_sort(arr, arr+5);

    return 0;
    }
