#include "../../header/grille.hpp"
#include <iostream>
#include <string>

using namespace std;

Grille::Grille() {
    grille = { 1, 2, 3, 4, 5 };
}

void Grille::AfficherConsole() {
    for ( auto i = grille.begin() ; i != grille.end() ; i++ ) {
        cout << ' ' << *i;
    }   
}