#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n, fatorial = 1;

    cout << "Digite o valor de N: ";
    cin >> n;

    for(int i=n; i>0; i--){
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}
