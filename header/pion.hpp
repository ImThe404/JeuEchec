
#ifndef __PION__
    #define __PION__   
    #include "piece.hpp" 

    class Pion : public Piece {

        using Piece::Piece;

        private:
            int _player;

        public:
            Pion(int player) noexcept;
            int getPlayer() const;

    };


#endif