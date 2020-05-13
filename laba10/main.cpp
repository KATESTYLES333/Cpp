#include <iostream>
#include <cstdlib>

double** swapline(double** a, int m, int n, int k1, int k2)
{
    if (k1 > m || k2 > m)
    {
        return a;
    }
    double temp = 0;
    for(int i = 0; i < n; ++i)
    {
        temp = a[k1][i];
        a[k1][i] = a[k2][i];
        a[k2][i] = temp;
    }
    return a;
}

int main()
{
    double** a = new double*[5];
    for (int i = 0; i < 5; ++i)
    {
        double* temp = new double[5];
        for (int j = 0; j < 5; ++j)
        {
            temp[j] = rand() % 100;
            std::cout << temp[j] << ' ';
        }
        a[i] = temp;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    double** b = swapline(a, 5, 5, 2, 3);
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
