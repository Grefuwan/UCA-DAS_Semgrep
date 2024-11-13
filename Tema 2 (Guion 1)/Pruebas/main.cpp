#include <iostream>

using namespace std;

int main(){

    int hor, minut, sego, segf, interm1, interm2;
    cout << "Introduzca los segundos que desee convertir: ";
    cin >> sego;

    hor = sego /3600;
    interm1 = sego % 3600;
    minut = interm1 / 60;
    interm2 = minut % 60;
    segf = interm2;

    cout << hor <<"            " << interm1;





     return 0;
}
