#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    area = 3.14159 * r * r;

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

	return 0;
}
