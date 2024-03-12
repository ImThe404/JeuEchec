#include "../header/grille.hpp"
#include "../header/pion.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1 = "Hello";

    Pion p{0};
    p.AfficherConsole();

    Grille g{};
    g.AfficherConsole();

    return 0;
}