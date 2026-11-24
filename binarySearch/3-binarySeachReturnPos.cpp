#include <iostream>

int binarySearch(int vetor[], int tamanho, int valorProcurado) {
    int inicio = 0, fim = tamanho - 1, meio;
    while(inicio <= fim) {
        if (vetor[meio] == valorProcurado) {
            return meio;
        } else if (vetor[meio] > valorProcurado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {

}