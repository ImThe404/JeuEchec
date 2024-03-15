
#ifndef __CHEVAL__
    #define __CHEVAL__   
    #include "piece.hpp"

    class Cheval : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Cheval(int player) noexcept; 
    };


#endif