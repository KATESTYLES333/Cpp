#include <iostream>
int f_places[5][10]{
                   {1,2,3,4,5,6,7,8,9,10},
                   {1,2,3,4,5,6,7,8,9,10},
                   {1,2,3,4,5,6,7,8,9,10},
                   {1,2,3,4,5,6,7,8,9,10},
                   {1,2,3,4,5,6,7,8,9,10},
                 };

void free_places( )
{
 std::cout << "Parking" << std::endl;
    for (int i = 0; i < 5; ++i)
    {std::cout << "  " << i+1 <<" - "<< "floor:   " ;
        for(int j = 0; j < 10; ++j)
        {
            std::cout << f_places[i][j] <<" | ";
        }
        std::cout<<std::endl;
    }
    std::cout << std::endl;

}

void booking()
{
    std::cout << "Choose floor:" << std::endl;
    int floor = 0;
    int place = 0;
    std::cin >> floor;
    for(; floor != 5; ++floor)
    {
        if(floor > 5 || floor < 0)
        {
            std::cout << "error" << std::endl;
        }
    std::cout << "Choose place" << std::endl;
    std::cin >> place;
    for(; place != 10; ++place)
    {
        if(place > 10 || place < 0)
        {
            std::cout << "error" << std::endl;
        }
    }

    }
    std::cout << "Success";
}
/*
void booking ()
{
    std::cout << "Choose floor:" << std::endl;
    for(int f = 0; f != 5; ++f)
    {
       std::cin >> f;
       if(f > 5 || f < 0)
       {
           std::cout << "There is no such floor. Write correct floor :" << std::endl;
       }
    }

    std::cout <<"Choose place:" << std::endl;
    for(int p = 0; p != 10; ++p)
    {
        std::cin >> p;
        if(p > 10 || p < 0)
        {
            std::cout << "There is no such place. Write correct place";
        }
        std::cout <<"correct place" << std::endl;
    }
}
*/

int main()
{
    free_places();
    booking();
    return 0;
}
