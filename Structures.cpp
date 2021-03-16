
#include <iostream>


struct FavoriteGames //creating simple structure 
{
    std::string title;
    int year;
}games [3]; //adding an array of 3 elements

struct Gamers
{
    std::string name;
    FavoriteGames Fgame;
}John;

int main()
{
    int n;
    John.name = "John";
    John.Fgame.title = "Best Game";
    John.Fgame.year = 2001;
    for ( n = 0; n < 3; n++)
    {
        std::cout << "Enter title of a game: " << std::endl;
        std::cin >> games[n].title;     //access to tittle with " . "
        std::cout << "Enter year of release: " << std::endl;
        std::cin >> games[n].year;
    }
    std::cout << "Your favorite games: " << std::endl;
    for (n = 0; n < 3; n++)
    {
        std::cout << games[n].title << " (" << games[n].year << ") " << std::endl;
        
    }
    std::cout << "But " << John.name << "`s favorite game is: " << std::endl;
    std::cout << John.Fgame.title << " (" << John.Fgame.year << ") " << std::endl;
}
