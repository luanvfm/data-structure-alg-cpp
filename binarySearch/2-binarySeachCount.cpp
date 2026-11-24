#include <iostream>

int binarySearch(int vetor[], int tamanho, int valorProcurado){
    int inicio = 0, fim = tamanho - 1, meio, ctr = 1;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        ctr++;
        if (vetor[meio] == valorProcurado) {
            return ctr;
        } else if (valorProcurado > vetor[meio]) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1; 

}

int main() {
    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tamanho = 10;
    int valorProcurado = 100;

    std::cout << "Quantidade de iteracoes para encontrar 100 foi: " << binarySearch(vetor, tamanho, valorProcurado);

}