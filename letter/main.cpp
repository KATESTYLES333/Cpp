#include <iostream>
#include <initializer_list>
#include <array>
#include <stdexcept>
#include <vector>

struct Letter
{
    std::array <std::array <char, 5>, 5> cont;
    Letter() = default;
    Letter(std::initializer_list <std::initializer_list<char>> args)
    {
        int c = 0;
        int r = 0;
        for(auto i = args.begin(); i != args.end(); ++i)
        {
            if(args.size() != 5 || args.begin()->size() != 5)
            {
                throw std::out_of_range("Error");
            }
            for(auto j = i->begin(); j != i->end(); ++j)
            {
                cont[c][r];
                ++r;
            }
            r = 0;
            ++c;
        }
    }

    void print_matrix()
    {
        for(auto i = cont.cbegin(); i != cont.cend(); ++i)
        {
            for(auto j = i->begin(); j != i->end(); ++j)
            {
                std::cout << *j << " ";
            }
            std::cout << std::endl;
        }
    }
};



int main()
{
    Letter a{{'*'},{' '},{'*'},{' '},{'*'}};
    return 0;
}
