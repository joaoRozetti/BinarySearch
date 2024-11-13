#include <iostream>
#include <vector>

using namespace std;

int buscaSequencial(vector<int>& v, int x) {
    int n = v.size();
    for (int j = 0; j < n - 1; ++j) {
        if (v[j] < x && x <= v[j + 1]) {
            return j;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int x = 6;
    int indice = buscaSequencial(v, x);

    if (indice != -1) {
        cout << "O índice j que satisfaz a condição é: " << indice << endl;
    } else {
        cout << "Não há um índice que satisfaça a condição." << endl;
    }

    return 0;
}
