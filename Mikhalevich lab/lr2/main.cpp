#include <iostream>
#include <vector>
#include <ostream>
#include <algorithm>

enum Genre{Action, Role_playing, Simulation, Strategy, Sports, Action_adventure};

struct Game
{
    Genre genre;
    std::string name;
    Game () = default;
    Game(Genre g , std::string n) :  genre (g), name (n) {}

};

std::ostream& operator << (std::ostream& out, const Game& b)
{
    return out << b.name  ;
}

std::vector<Game> games
{
    Game(Action, "Grand Theft Auto V"),
    Game(Action, "Minecraft"),
    Game(Action,"Fortnite"),
    Game(Action, "Prince of Persia"),
    Game(Action, "Pac-Man"),
    Game(Role_playing, "Star Wars"),
    Game(Role_playing, "World of Warcraft"),
    Game(Role_playing, "Ведьмак"),
    Game(Role_playing, "Anthem"),
    Game(Role_playing, "Skyrim"),
    Game(Simulation, "Spore"),
    Game(Simulation, "Kerbal Space Program"),
    Game(Simulation, "X-Plane"),
    Game(Simulation, "Euro Truck"),
    Game(Simulation, "Skylines"),
    Game(Strategy, "The Sims 1"),
    Game(Strategy, "The Sims 2"),
    Game(Strategy, "The Sims 3"),
    Game(Strategy, "The Sims 4"),
    Game(Strategy, "The Sims 5"),
    Game(Sports, "Fifa 18"),
    Game(Sports, "Fifa 19"),
    Game(Sports, "NBA 2k18"),
    Game(Sports, "Pes"),
    Game(Sports, "Fifa 17"),
    Game(Action_adventure, "The last of us"),
    Game(Action_adventure, "Assassin's Greed IV"),
    Game(Action_adventure, "Assassin's Creed V"),
    Game(Action_adventure, "Dishonored"),
    Game(Action_adventure, "The last of last")
};

int main()
{
   /* int n = 0;
    std::cout << "Your number :" ;
    std::cin >> n;
    if (n > 0)
    {
        std::cout << n + 1;
    }
    std::cout << n - 2;
    */
    std::cout << "Genres : 1-Action, 2-Role_playing, ..." << std::endl;
    std::cout <<  " Your number :" ;
    int key = 0;
    std::cin >> key;
    std::for_each (games.begin (), games.end (), [key] (const Game& b){if (b.genre == key){std::cout << b << std::endl;}});
    return 0;
}
