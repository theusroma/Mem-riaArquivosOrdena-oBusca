#include <stdio.h>
#include <stdlib.h>

//Eficiente para conjuntos pequenos de dados
//Ineficiente para listas grandes
//Melhor caso: O(N)
//Pior caso: O(N2)


// Fun��o para ordenar um vetor usando o m�todo Insertion Sort
void insertionSort(int *V, int N) {
    int i, j, aux; // Vari�veis de controle

    // Percorre o vetor a partir do segundo elemento
    for (i = 1; i < N; i++) {
        aux = V[i]; // Armazena o valor do elemento atual (aux)
        for(j = i; (j > 0) && (aux < V[j - 1]); j--){
        V[j] = V[j - 1]; // Move o elemento maior uma posi��o � frente
		}
        V[j] = aux;
    }
}

int main() {
    // Exemplo de vetor desordenado
    int vetor[] = {7, 3, 5, 2, 9, 1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int i; // Vari�vel para iterar nos loops

    // Exibe o vetor antes da ordena��o
    printf("Vetor antes da ordena��o: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordena o vetor usando Insertion Sort
    insertionSort(vetor, tamanho);

    // Exibe o vetor ap�s a ordena��o
    printf("\nVetor ap�s a ordena��o: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0; // Indica que o programa terminou corretamente
}
	
