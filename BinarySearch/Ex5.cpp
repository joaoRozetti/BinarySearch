#include <iostream>

using namespace std;

int busca_binaria(int x, int *v, int n) {
    int ini = 0;
    int fim = n - 1;
    while (ini <= fim) {
        int i = (ini + fim) / 2;
        if (v[i] == x)
            return i;
        if (v[i] < x)
            ini = i + 1;
        else
            fim = i - 1;
    }
    return -1;
}

bool duas_somas(int *v, int n, int t, int& i, int& j) {
    for (i = 0; i < n - 1; ++i) {
        int complemento = t - v[i];
        j = busca_binaria(complemento, v, n);
        if (j != -1 && j != i) {
            return true;
        }
    }
    return false;
}

int main() {
    int v[] = {1, 3, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int t = 10;
    int i, j;

    if (duas_somas(v, n, t, i, j)) {
        cout << "Os indices i e j sao: " << i << " e " << j << endl;
    } else {
        cout << "Nao ha dois indices que somem para " << t << endl;
    }

    return 0;
}
