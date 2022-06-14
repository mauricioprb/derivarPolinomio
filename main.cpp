#include <iostream>

using namespace std;

void deriva(int poli[], int grau, int out[]) {
    int i = 0;

    cout << "Digite o grau: ";
    cin >> grau;

    while(i < grau) {
        cout << "Digite o coeficiente: ";
        cin >> poli[i];
        i += 1;
    }

    for(i = grau; i >= 1; i = i - 1) {
        out[i - 1] = poli[i] * i;
    }

    cout << out[i] << endl;
}

int main() {
    int grau = 0;
    int poli[grau];
    int out[grau];

    deriva(poli, grau, out);

    return 1;
}