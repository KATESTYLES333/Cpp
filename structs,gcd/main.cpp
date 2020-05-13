#include <iostream>
#define Pi = 3,14

/*template < class Iterator, class UP >
bool all_of ( Iterator first, Iterator last, UP p)
{
    for ( ;first < last;++ first)
    {
        if (!p (*first))
        {
            return false;
        }
    }
    return true;
}

int count_max(int v)
{
	int digit = v % 10;
	int count = 1;
	v = v / 10;
	for(;v ;v / 10)
	{
		if (v % 10 == digit)
		{
			++count;
		}
		if (v % 10 > digit)
        {
            digit = v % 10;
            count = 1;
        }
	}
}


struct Figure
{
    int colour;
    virtual double square () = 0;
    virtual double perimetr () = 0;
};

struct Rectungle : Figure
{
    int a;
    int b;
    double square() override
    {
        return a*b;
    }
};

struct Square : Figure
{
    int a;
    double square() override
    {
        return a * a;
    }
};

int accumulate(Figure*first, Figure*last, int temp)
{
    for ( ;first < last;++first)
    {
        temp += Figure ->square()
    }
}

int gcd(int a, int b)
{
    int c = 0;
    while (c = a % b)
    {
        a = b;
        b = c;
        c = a;
}

bool is_palendrome(int v)
{
     return v;
}

int reverse(int v)
{
	int res = 0;
	for(;v != 0;v = v / 10)
	{
		res *= 10;
		res = res + v % 10;
	}
}
*/
struct Integer
{
    int* value;
    Integer() = default;
    Integer(v):value(new int(v))

    bool operator ==(Integer)
    {
        return this->value == that.value;
    }
};
int main()
{
    /*int res =all_of(1, 10, 1);
    std::cout << res << std::endl;
    Figure* f1 = new Rectungle;
    Figure* f2 = new Square;
    */
    return 0;
}
