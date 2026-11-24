#include <iostream>
// Encontre o valor 13 no vetor: {2, 4, 6, 8, 10, 12, 13, 14, 16, 18}


int binarySearch(int vetor[], int tamanho, int valorProcurado){
    int fim = tamanho - 1;
    int inicio = 0;
    int meio;
    
    while(inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == valorProcurado) {
            return meio;
        }
        else if (valorProcurado > vetor[meio]) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int tamanho = 10;
    int valorProcurado = 13;

    std::cout << binarySearch(vetor, tamanho, valorProcurado);
    
    return 0;
}