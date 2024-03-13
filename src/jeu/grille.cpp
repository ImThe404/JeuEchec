#include "../../header/grille.hpp"
#include "../../header/pion.hpp"
#include <iostream>
#include <string>

using namespace std;

Grille::Grille() {
    for ( int i = 0 ; i < this->taille ; i++ ) {
        vector<Piece> ligne;
        for ( int y = 0 ; y < this->taille ; y++ ) {
            Pion p{0};              // Construit un nouveau pion
            ligne.push_back(p);     // ajoute ce nouveau pion à la fin de la nouvelle ligne
        }
        grille.push_back(ligne);
    }
}

/* va afficher en console les pieces du jeu
*/
void Grille::AfficherConsole() {
    for ( auto i = 0 ; i < grille.size() ; i++ ) {
        for ( auto y = 0 ; y < grille[i].size() ; y++ ) {
            cout << ' ' << grille[y][i].getIcon();
        }   
        cout << '\n';
    }   
}