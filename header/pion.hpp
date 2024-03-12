
#ifndef __PION__
    #define __PION__   
    #include "piece.hpp" 

    class Pion : public Piece {

        protected:
            const char icon_w = 'O';
            const char icon_b = 'e';

        public:
            using Piece::Piece;
            Pion(int player) noexcept;

    };


#endif