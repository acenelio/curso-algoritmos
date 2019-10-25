#include <iostream>

using namespace std;

int main(){
    int n, produto;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for (int i=1;i<=10;i++) {
        produto = n * i;
        cout << n << " x " << i << " = " << produto << endl;
    }

    return 0;
}
