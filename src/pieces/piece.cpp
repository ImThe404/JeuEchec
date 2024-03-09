#include "../../header/piece.hpp"
#include <iostream>
#include <string>

using namespace std;

Piece::Piece(char icon) noexcept : _icon(icon) {
}

void Piece::AfficherConsole() noexcept {
    cout << _icon;
}