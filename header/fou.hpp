
#ifndef __FOU__
    #define __FOU__   
    #include "piece.hpp"

    class Fou : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Fou(int player) noexcept; 
    };


#endif