#include "../../header/pion.hpp"
#include <iostream>
#include <string>

using namespace std;

Pion::Pion(int player) noexcept : Piece('0'), _player(player) {
}

int Pion::getPlayer() const {
    return _player;
}