
#ifndef __PION__
    #define __PION__   
    #include "piece.hpp"

    class Pion : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Pion(int player) noexcept; 

    };


#endif