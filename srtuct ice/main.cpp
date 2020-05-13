#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Ice_cream
{
    std::string name;
    double weight;
    double coast;
    double get_price (double control_weight)
    {
        return (control_weight / weight) * coast;
    }
};

std::vector <Ice_cream> ice_cream
{
Ice_cream {"Alenka", 100.0, 20.5},
Ice_cream {"Ashan", 90, 30.5},
Ice_cream {"Vorobey",10, 100}
};


//a1a2 + a1a2a3 + a1a2a3a4 + ...
int f (std::vector <int> v, int n)
{
    int temp = v[0] * v[1];
    for (int i = 2; i < n; ++ i)
    {
        int result =result + temp;
        {
            temp *= v[i];
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

int main()
{
    std::for_each (ice_cream.begin(),ice_cream.end (),[](Ice_cream a){std::cout <<a.get_price(1000);});
    return 0;
}
