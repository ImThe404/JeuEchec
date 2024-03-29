#include "../../header/pion.hpp"
#include <vector>

using namespace std;

// Le vector qui contient les 2 icons pour representer la piece : le 1er pour les blancs et le 2eme pour les noirs
vector<char> iconsPion = { 'o', 'O' };

/* Constructeur de base 
 * @param prend le numéro du joueur ( 0 pour les blanc et 1 pour les noirs)
*/
Pion::Pion(int player) noexcept : Piece(iconsPion[player], player){
}