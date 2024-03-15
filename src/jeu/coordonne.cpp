#include "../../header/coordonne.hpp"

using namespace std;

Coordonne::Coordonne() noexcept {
}

/* Constructeur de base 
 * @param prend le numéro du joueur ( 0 pour les blanc et 1 pour les noirs)
*/
Coordonne::Coordonne(int x, int y) noexcept : _x(x), _y(y) {
}

int Coordonne::GetX() {
    return this->_x;
}

int Coordonne::GetY() {
    return this->_y;
}

void Coordonne::SetX(int x) {
    this->_x = x;
}

void Coordonne::SetY(int y) {
    this->_y = y;
}