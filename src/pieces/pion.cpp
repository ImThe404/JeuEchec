#include "../../header/pion.hpp"
#include <iostream>
#include <string>

using namespace std;
char a;

Pion::Pion(int player) noexcept : Piece(icon_b, player){
    if ( player == 0 ) {
        a = '0';
    } else {
        a = 'o';
    }
}