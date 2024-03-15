
#ifndef __REINE__
    #define __REINE__   
    #include "piece.hpp"

    class Reine : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Reine(int player) noexcept; 
    };


#endif