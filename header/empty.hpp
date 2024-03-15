
#ifndef __EMPTY__
    #define __EMPTY__   
    #include "piece.hpp"

    class Empty : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Empty() noexcept; 

    };


#endif