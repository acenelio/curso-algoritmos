#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y;

    cout << "Valor de X: ";
    cin >> x;

    cout << "Valor de Y: ";
    cin >> y;


    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }
    else if(x == 0){
        cout << "Eixo Y" << endl;
    }
    else if(y == 0){
        cout << "Eixo X" << endl;
    }
    else if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "Q3" << endl;
    }
    else{
        cout << "Q4" << endl;
    }

	return 0;
}
