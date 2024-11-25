#include <stdio.h>
#include <stdlib.h>

//Eficiente para conjuntos pequenos de dados
//Ineficiente para listas grandes
//Melhor caso: O(N)
//Pior caso: O(N2)


// Função para ordenar um vetor usando o método Insertion Sort
void insertionSort(int *V, int N) {
    int i, j, aux; // Variáveis de controle

    // Percorre o vetor a partir do segundo elemento
    for (i = 1; i < N; i++) {
        aux = V[i]; // Armazena o valor do elemento atual (aux)
        for(j = i; (j > 0) && (aux < V[j - 1]); j--){
        V[j] = V[j - 1]; // Move o elemento maior uma posição à frente
		}
        V[j] = aux;
    }
}

int main() {
    // Exemplo de vetor desordenado
    int vetor[] = {7, 3, 5, 2, 9, 1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int i; // Variável para iterar nos loops

    // Exibe o vetor antes da ordenação
    printf("Vetor antes da ordenação: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordena o vetor usando Insertion Sort
    insertionSort(vetor, tamanho);

    // Exibe o vetor após a ordenação
    printf("\nVetor após a ordenação: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0; // Indica que o programa terminou corretamente
}
	
