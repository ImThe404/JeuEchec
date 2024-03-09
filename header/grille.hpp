#include <list>
#include <iostream>

using namespace std;

#ifndef __GRILLE__
    #define __GRILLE__    
    #pragma once


    class Grille {
    
        private:
            int taille = 8;
            list<int> grille;

        public:
            Grille();
            void AfficherConsole();
    };


#endif