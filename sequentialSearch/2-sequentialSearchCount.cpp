#include <iostream>

using namespace std;

// Conte quantas vezes o número 7 aparece no vetor: {7, 3, 5, 7, 9, 2, 7, 1, 4, 6}

int buscaSequencial(int vetor[], int tamanho, int valorProcurado){
    tamanho = tamanho - 1; // tamanho é o tamanho recebido -1
    int ctr = 1;

    for(int i = 0; i < tamanho; i++) {
        if (vetor[i] == valorProcurado){
            ctr = ctr + 1;
            continue;
        }
        return ctr;
    }
    return 1;
}

int main(){

    int vetor[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int tamanho = 10;
    int valorProcurado = 7;
    cout << buscaSequencial(vetor, tamanho, valorProcurado);
    return 0;
}