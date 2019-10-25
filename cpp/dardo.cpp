#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double distancia1, distancia2, distancia3, maior;

    cout << "Digite as tres distancias:" << endl;
    cin >> distancia1 >> distancia2 >> distancia3;

    if(distancia1 > distancia2 && distancia1 > distancia3){
        maior = distancia1;
    }
    else if(distancia2 > distancia1 && distancia2 > distancia3){
        maior=distancia2;
    }
    else{
        maior=distancia3;
    }

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;

	return 0;
}
