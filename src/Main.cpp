#include "../header/grille.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {

    Grille g{};

    g.AfficherConsole();

    while ( true ) {
        Coordonne start = g.GetCoord(g.Ask(0));
        Coordonne end =   g.GetCoord(g.Ask(1));
        g.Move(start, end);
        g.AfficherConsole();
    }
    

    return 0;
}