
#ifndef __COORDONNE__
    #define __COORDONNE__   

    class Coordonne {

        private:
            int _x;
            int _y;

        public:
            Coordonne() noexcept;
            Coordonne(int x, int y) noexcept; 
            int GetX();
            int GetY();
            void SetX(int x);
            void SetY(int y);
    };


#endif