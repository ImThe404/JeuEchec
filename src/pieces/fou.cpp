#include "../../header/fou.hpp"
#include <vector>

using namespace std;

// Le vector qui contient les 2 icons pour representer la piece : le 1er pour les blancs et le 2eme pour les noirs
vector<char> iconsFou = { 'j', 'J' };

/* Constructeur de base 
 * @param prend le numéro du joueur ( 0 pour les blanc et 1 pour les noirs)
*/
Fou::Fou(int player) noexcept : Piece(iconsFou[player], player){
}