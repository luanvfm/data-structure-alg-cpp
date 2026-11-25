#include <iostream>

int binarySearch(int vetor[], int tamanho, int valorProcurado) {
    int inicio = 0, fim = tamanho - 1, meio;

    while(inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == valorProcurado) {
            return meio;
        } else if (vetor[meio] < valorProcurado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return inicio;

}

int main() {
    int vetor[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int tamanho = 10;
    int valorProcurado = 27;

    std::cout << binarySearch(vetor, tamanho, valorProcurado);

}