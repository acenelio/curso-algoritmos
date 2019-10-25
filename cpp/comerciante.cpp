#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, abaixo = 0, entre = 0, acima = 0;
    double vtotalcompra = 0, vtotalvenda = 0, lucrototal = 0;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nomes[n];
    double pcompra[n], pvenda[n], porcentagemlucros[n];

    for(int i=0; i<n; i++){
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Preco de compra: ";
        cin >> pcompra[i];
        cout << "Preco de venda: ";
        cin >> pvenda[i];
     }

    for(int i=0; i<n; i++){
        porcentagemlucros[i] = (pvenda[i] - pcompra[i]) / pvenda[i] * 100.0;
    }

    for(int i=0; i<n; i++){
        if(porcentagemlucros[i] < 10){
            abaixo++;
        }
        else if(porcentagemlucros[i] < 20){
            entre++;
        }
        else{
            acima++;
        }
    }

    for(int i=0; i<n; i++){
        vtotalcompra = vtotalcompra + pcompra[i];
        vtotalvenda = vtotalvenda + pvenda[i];
    }

    lucrototal = vtotalvenda - vtotalcompra;

    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo << endl;
    cout << "Lucro entre 10% e 20%: " << entre << endl;
    cout << "Lucro acima de 20%: " << acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << vtotalcompra << endl;
    cout << "Valor total de venda: " << vtotalvenda << endl;
    cout << "Lucro total: " << lucrototal << endl;

    return 0;
}
