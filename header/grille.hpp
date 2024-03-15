
#ifndef __GRILLE__
    #define __GRILLE__    
    #pragma once
    #include <vector>
    #include <iostream>
    #include "piece.hpp"

    using namespace std;

    class Grille {
    
        private:
            int taille = 8;                 // la taille du plateau, 8 car un plateau d'echec est en 8x8
            vector<vector<Piece>> grille;   // la grille qui va contenir les pieces
            vector<Piece> InitLignePion(int player);
            vector<Piece> InitLigneBack(int player);

        public:
            Grille();
            void AfficherConsole();
    };


#endif