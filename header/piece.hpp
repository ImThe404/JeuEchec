
#ifndef __PIECE__
    #define __PIECE__   

    class Piece {

        private:
            char _icon;     // L'icon qui represente la piece du jeu
            int _player;    // le numéro du joueur ( 0 pour les blanc et 1 pour les noirs)

        public:
            Piece(char icon, int player) noexcept; 
            char getIcon() const;
            int getPlayer() const;
    
    };

#endif