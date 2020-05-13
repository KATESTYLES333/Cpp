#include <iostream>

//поверхностное копирование
struct Integer
{
    int* value;
    Integer() = default;
    explicit Integer(int v):value(new int(v)){}

    bool operator==(const Integer& that)
    {
        return this->value == that.value;
    }

    void operator=(const Integer& that)
    {
        this->value = that.value;
    }

    void set_value(int v)
    {
        *value = v;
    }

    int get_value()
    {
        return *value;
    }
    // для глубокого копирования
    void copy(const Integer& that)
    {
        *(this->value) = *(that.value);
    }

    bool equal(const Integer& that)
    {
        return *(this->value) == *(that.value);
    }

};

int main()
{
    Integer a(4);
    Integer b(8);
    a=b;
    return 0;
}
