#include <iostream>

using namespace std;

int buscaBinariaModificada(int v[], int n, int x) {
    int esquerda = 0, direita = n - 1;
    int resultado = -1; 

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (v[meio] >= x) {
            resultado = meio;  
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return resultado;
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int x = 6;
    int indice = buscaBinariaModificada(v, n, x);

    if (indice != -1) {
        cout << "O menor indice onde v[j] >= " << x << " é: " << indice << endl;
    } else {
        cout << "Não há um indice onde v[j] >= " << x << endl;
    }

    return 0;
}
