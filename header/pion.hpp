
#ifndef __PION__
    #define __PION__   
    #include "piece.hpp" 

    class Pion : public Piece {

        using Piece::Piece;

        private:
            const char icon_w = 'O';
            const char icon_b = 'o';

        public:
            Pion(int player) noexcept;

    };


#endif