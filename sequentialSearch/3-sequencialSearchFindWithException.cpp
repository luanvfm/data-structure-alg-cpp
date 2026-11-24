#include <iostream>
//  Busque o número 55 e retorne o índice ou -1: {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}

int buscaSequencial(int vetor[], int tamanho, int valorProcurado){
    
    tamanho = tamanho -1;

    for(int i = 0; i < tamanho; i++) {
        if (vetor[i] == valorProcurado) {
            return i;
        }
    }
    return -1;
}

int main(){

    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tamanho = 10;
    int valorProcurado = 90;
    
    std::cout << buscaSequencial(vetor, tamanho, valorProcurado);


}