#include <iostream>


int get_last_number(int n)
 int sum=0;
while (n)
    {sum+=n%10;
    n/=10;
    return 0;
  }


int main()
{
    int r= get_last_number(23);
    cout << r << endl;
    return 0;
}
