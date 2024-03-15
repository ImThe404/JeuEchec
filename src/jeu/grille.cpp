#include "../../header/grille.hpp"

#include "../../header/pion.hpp"
#include "../../header/empty.hpp"
#include "../../header/tour.hpp"
#include "../../header/cheval.hpp"
#include "../../header/fou.hpp"
#include "../../header/reine.hpp"
#include "../../header/roi.hpp"

#include <iostream>
#include <string>

using namespace std;

Grille::Grille() {
    grille.push_back(InitLigneBack(0));
    grille.push_back(InitLignePion(0));
    for ( int i = 0 ; i < this->taille -4 ; i++ ) {
        vector<Piece> ligne;
        for ( int y = 0 ; y < this->taille ; y++ ) {
            Empty e{};              // Construit un nouveau pion
            ligne.push_back(e);     // ajoute ce nouveau pion à la fin de la nouvelle ligne
        }
        grille.push_back(ligne);
    }
    grille.push_back(InitLignePion(1));
    grille.push_back(InitLigneBack(1));
}

/* Va prendre en parametre un numéro de joueur et créer une ligne arriere avec les piece correspondante
 * @param player le numéro du joueur correspondant
 * @require un numéro de joueur égal à 0 ou 1
 * @return un vector de piece
 */
vector<Piece> Grille::InitLigneBack(int player) {
    vector<Piece> ligne;
    Tour t1{player};      
    ligne.push_back(t1);
    Cheval c1{player};      
    ligne.push_back(c1);
    Fou f1{player};        
    ligne.push_back(f1);
    Reine reine{player};        
    ligne.push_back(reine);
    Roi roi{player};         
    ligne.push_back(roi);
    Fou f2{player};         
    ligne.push_back(f2);
    Cheval c2{player};      
    ligne.push_back(c2);
    Tour t2{player};        
    ligne.push_back(t2);
    return ligne;
}

/* Va prendre en parametre un numéro de joueur et créer une ligne avant avec des pions
 * @param player le numéro du joueur correspondant
 * @require un numéro de joueur égal à 0 ou 1
 * @return un vector de piece composer uniquement de pions
 */
vector<Piece> Grille::InitLignePion(int player) {
    vector<Piece> ligne;
    for ( int y = 0 ; y < this->taille ; y++ ) {
        Pion p{player};         // Construit un nouveau pion
        ligne.push_back(p);     // ajoute ce nouveau pion à la fin de la nouvelle ligne
    }
    return ligne;
}



/* va afficher en console les pieces du jeu
*/
void Grille::AfficherConsole() {
    cout << "\n/  a b c d e f g h";
    for ( auto i = 0 ; i < grille.size() ; i++ ) {
        cout << '\n' << i << ' '; 
        for ( auto y = 0 ; y < grille[i].size() ; y++ ) {
            cout << ' ' << grille[i][y].getIcon();
        }   
    }   
}