
#ifndef __PIECE__
    #define __PIECE__   

    class Piece {

        private:
            char _icon;

        public:
            Piece(char icon) noexcept;
            void AfficherConsole() noexcept;
    
    };

#endif