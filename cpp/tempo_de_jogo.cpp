#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hinicial, hfinal;

    cout << "Hora inicial: ";
    cin >> hinicial;

    cout << "Hora final: ";
    cin >> hfinal;

    if(hinicial < hfinal){
        cout << "O JOGO DUROU " << hfinal - hinicial << " HORA(S)" << endl;
    }
    else{
        cout << "O JOGO DUROU " << 24 - (hinicial - hfinal) << " HORA(S)" << endl;
    }

	return 0;
}
