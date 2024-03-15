
#ifndef __TOUR__
    #define __TOUR__   
    #include "piece.hpp"

    class Tour : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Tour(int player) noexcept; 
    };


#endif