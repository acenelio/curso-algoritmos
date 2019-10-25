#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Digite dois numeros inteiros:" << endl;
    cin >> num1 >> num2;

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        cout << "Sao multiplos" << endl;
    }
    else {
        cout << "Nao sao multiplos" << endl;
    }

	return 0;
}
