
#ifndef __ROI__
    #define __ROI__   
    #include "piece.hpp"

    class Roi : public Piece {

        public:
            using Piece::Piece;         // Utilise la classe piece 
            Roi(int player) noexcept; 
    };


#endif