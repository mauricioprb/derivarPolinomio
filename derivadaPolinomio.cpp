#include <iostream>

using namespace std;

void deriva(double poli[], int grau, double out[]) {
    int i = 0;

    while(i <= grau) {
        cout << "Digite o coeficiente do polinomio: ";
        cin >> poli[i];
        i++;
    }
    
    for(i = grau; i >= 1; i--) {
        out[i] = poli[i] * i;
        
        cout << out[i] << "x^" << i - 1 << " + 0";
    }
}

int main() {
    int grau;

    cout << "Digite o grau: ";
    cin >> grau;

    double poli[grau], out[grau - 1];

    deriva(poli, grau, out);

    return 1;
}
