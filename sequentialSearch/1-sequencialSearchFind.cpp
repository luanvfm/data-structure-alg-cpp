
#include <iostream>
// Encontre o número 25 no vetor{15, 8, 25, 7, 12, 18, 5, 9, 30, 3}

int buscaSequencial(int vetor[], int tamanho, int valorProcurado){
    tamanho = tamanho - 1;
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == valorProcurado) {
            return i;
        }
    }
    return 1;
}

// DUVIDAS: tamanho é +1 ou -1?

int main(){

    int vetor[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int tamanho = 10;
    std::cout << buscaSequencial(vetor, tamanho, 30);

}