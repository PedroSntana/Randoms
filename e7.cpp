#include <iostream>

using namespace std;

void desenhaT(int tamanhoLado) {
      // Linhas:
      for(int i = 0; i < tamanhoLado; i++) {
          // Colunas:
          for (int j = 0; j < tamanhoLado; j++) {
            if(tamanhoLado / 2 == j) {
                cout << '*';
            } else if (tamanhoLado-1 == i) {
                cout << '*';
            } else {
                cout << ' ';
            }
          }
          cout << endl;
      }
}

int main() {
    int lado;
    cout << "Introduza o tamanho do lado do quadrado onde o T será inserido" << endl;
    cin >> lado;
    desenhaT(lado);
	return 0;
}
