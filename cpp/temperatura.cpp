#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char escala;
    double celsius, fahrenheit;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala == 'F') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> fahrenheit;

        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        cout << "Temperatura equivalente em Celsius: " << celsius << endl;
    }
    else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> celsius;

        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        cout << "Temperatura equivalente em Fahrenheit: " << fahrenheit << endl;
    }

	return 0;
}
