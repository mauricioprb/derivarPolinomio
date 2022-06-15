#include <iostream>

using namespace std;

void deriva(double poli[], int grau, double out[]) {
    int i = 0;

    while(i <= grau) {
        cout << "Digite o coeficiente: ";
        cin >> poli[i];
        i += 1;
    }
    
    for(i = grau; i >= 1; i = i - 1) {
        out[1] = poli[i] * i;

        cout << out[1] << " ";
    }
}

int main() {
    int grau;
    double poli[grau], out[grau - 1];

    cout << "Digite o grau: ";
    cin >> grau;

    deriva(poli, grau, out);

    return 1;
}