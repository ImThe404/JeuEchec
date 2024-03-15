#include "../../header/cheval.hpp"
#include <vector>

using namespace std;

// Le vector qui contient les 2 icons pour representer la piece : le 1er pour les blancs et le 2eme pour les noirs
vector<char> iconsCheval = { 'v', 'V' };

/* Constructeur de base 
 * @param prend le numéro du joueur ( 0 pour les blanc et 1 pour les noirs)
*/
Cheval::Cheval(int player) noexcept : Piece(iconsCheval[player], player){
}