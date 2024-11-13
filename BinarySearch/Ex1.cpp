#include <iostream>

using namespace std;

int buscaSequencial(int v[], int n, int x) {
    for (int j = 0; j < n - 1; ++j) {
        if (v[j] < x && x <= v[j + 1]) {
            return j;
        }
    }
    return -1; 
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = 5; 
    int x = 6;
    int indice = buscaSequencial(v, n, x);

    if (indice != -1) {
        cout << "O índice j que satisfaz a condição é: " << indice << endl;
    } else {
        cout << "Não há um índice que satisfaça a condição." << endl;
    }

    return 0;
}
