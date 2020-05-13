#include <iostream>

struct Point
{
    int x;
    int y;
Point (int x_, int y_)
{
    x=x_;
    y=y_;
}
Point ()
{
    x=0;
    y=0;
}
};
int main()
{
    Point a(2,3);
    std::cout << a.x << std::endl;
    std::cout << a.y << std::endl;
    return 0;
}
