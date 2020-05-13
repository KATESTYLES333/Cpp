#include <iostream>
using namespace std;
int min_mas(int*array, int size)
{
    int min_el = array [0];
    int min_index = 0;
    {
        for (int i = 1; i!= size ;++i)
        {
            if (array[i] > min_el)
            min_el = array [i];
            min_index = i;
        }
    return min_index;
    }
}
int main()
{
    int array [16] {4,75,97,54,86,35,94,35,21,33,45,98,12,64,13,74};
    int res = min_mas(array, 16);
    return 0;
}
