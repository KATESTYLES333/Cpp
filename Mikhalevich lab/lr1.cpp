#include <iostream>
#include <fstream>
#include <vector>
#include <ostream>
#include <algorithm>

struct SingleTone
{
    SingleTone () = default;
    void f (int a) {std::cout << a;};
}st;
enum Genre{Comedy, Horror, Adventure, Detective, Romantic};

struct Person
{
    std::string name;
    std::string surname;
    Person (std::string S_N)
    {
        surname = S_N;
    }
    Person (std::string name, std::string surname);
};

std::ostream& operator <<(std::ostream& out, const Person& p)
{
    return out << "name :" << p.name << "surname :" << p.surname;
}

struct Book
{
    std::string name;
    Genre genre;
    Person author;
    Book () = default;
    Book (std::string n, Genre g, Person a) : name (n), genre (g), author (a) {}

};

std::ostream& operator << (std::ostream& out, const Book& b)
{
    return out << "name:" << b.name << " " << "genre:" << b.genre;
}

std::vector<Book> books
{
Book {"Jungle Book", Genre::Adventure, Person ("Kipling")},
Book {"War and Peace", Genre :: Horror, Person ("Tolstoy")},
Book {"Forest Gump", Genre :: Comedy, Person ("Grum")},
Book {"50 shades of Grey", Genre :: Adventure, Person ("James")}
};

using Unary_function = double (*)(double);
using Ternarn_function = double (*) (double, double, Unary_function);

double z_x1(double x, double y, Unary_function f)
{
       return std::pow (f(x) + y, 2) - std::cbrt (std::abs(f(x)));
}

double z_x2(double x, double y, Unary_function f)
{
    return std::pow (f(x) + y, 2) + sin (x);
}

double z_x3 (double x, double y, Unary_function f)
{
    return std::pow (f(x) + y, 2) + std::pow (y, 3);
}

int main()
{
    st.f( 4);
    std::fstream fs("test.txt", fs.in | fs.out | fs.trunc);
    // std::cout << fs.in << " " << fs.out << " " << fs.trunc << " " << fs.binary;
    if (!fs.is_open())
    {
        std::cout << " error " ;
    }
    else
    {
        fs << " Hello world ";
    }
    Book a{"Jungle Book", Genre::Adventure, Person ("Kipling")};
    std::cout << a << std::endl;
    std::for_each (books.begin (), books.end (), [](Book a){std::cout << a << std::endl;});
    Genre key = Genre::Adventure;
    std::for_each (books.begin (), books.end (), [key] (const Book& b){if (b.genre == key){std::cout << b << std::endl;}});
    std::vector <Unary_function> f_x
    {
        [](double x){return std::pow (x,2);},
        [](double x){return ((pow (x, x) - pow (x, -x)/2));},
        [](double x){return std::exp(x); }
    };
    return 0;
    std::vector <Ternarn_function> op {z_x1, z_x2, z_x3};
    return 0;
}
