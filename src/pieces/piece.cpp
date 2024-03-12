#include "../../header/piece.hpp"
#include <iostream>
#include <string>

using namespace std;

/*
 * COMMENTAIRE 
 * pute
 * mmm
 * @param pd
 * 
 * 
*/
Piece::Piece(char icon, int player) noexcept : _player(player), _icon(icon) {
}

void Piece::AfficherConsole() noexcept {
    cout << _icon;
}

int Piece::getPlayer() const {
    return _player;
}