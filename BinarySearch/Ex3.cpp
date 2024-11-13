#include <iostream>

using namespace std;

int buscaSequencialRecursiva(int v[], int n, int x, int j) {
    if (j >= n - 1) {
        return -1; // Retorna -1 se não encontrar um índice que satisfaça a condição
    }

    if (v[j] < x && x <= v[j + 1]) {
        return j;
    }

    return buscaSequencialRecursiva(v, n, x, j + 1);
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int x = 6;
    int indice = buscaSequencialRecursiva(v, n, x, 0);

    if (indice != -1) {
        cout << "O índice j que satisfaz a condição é: " << indice << endl;
    } else {
        cout << "Não há um índice que satisfaça a condição." << endl;
    }

    return 0;
}
