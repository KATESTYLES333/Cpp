#include <iostream>
using namespace std;
struct Date
{   enum Month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    Month month;
    unsigned int day;
    int year;

};
int main()
{
 Date a;
 a.day=30;
 a.month= Date::Month::Apr;
 a.year=2001;
 cout<<a.day <<" "<< a.month <<" "<< a.year <<endl;
    return 0;
}
