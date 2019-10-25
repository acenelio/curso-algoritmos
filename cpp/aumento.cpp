#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario, novosalario, aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if(salario <= 1000.0){
        porcentagem = 20;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else if(salario <= 3000.0){
        porcentagem = 15;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else if(salario <= 8000.0){
        porcentagem = 10;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else{
        porcentagem = 5;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$ " << novosalario << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << "Porcentagem = " << porcentagem << " %" << endl;

	return 0;
}
