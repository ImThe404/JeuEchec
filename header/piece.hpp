
#ifndef __PIECE__
    #define __PIECE__   

    class Piece {

        private:
            char _icon;
            int _player;

        public:
            Piece(char icon, int player) noexcept;
            void AfficherConsole() noexcept;
            int getPlayer() const;
    
    };

#endif