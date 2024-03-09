#include "Pion.hpp"
#include <iostream>

using namespace std;

int enterNumber() {
    cout << "Entree un nombre : ";
    int x;
    cin >> x;
    return x;
}

int addition(int x, int y) {
    return x + y;
}

int main()
{

    int x = enterNumber();
    int y = enterNumber();

    int res = addition(x,y);

    for ( int i = 0 ; i < 2 ; i++ ) {
        cout << "le resultat est " << res;
        if ( res > 10 ) {
            cout << " et il est supp à 10\n";
        } else {
            cout << " et il est inf à 10\n";
        }
    }


    Pion pion{};
    cout << pion.getTaille();

    cout << endl;

    return 0;
}