#include <stdio.h>
#include <stdlib.h>

//Melhor Caso: O(N log N), sem otimizações específicas.
//Pior Caso: O(N log N), o que torna o Merge Sort muito eficiente mesmo em dados desordenados ou invertidos.
//Caso Médio: O(N log N), mantendo a eficiência constante.
//Espaço: O(N), exigindo memória adicional.
//Estabilidade: O Merge Sort é estável, mantendo a ordem relativa de elementos iguais.
//eficiente com grandes conjuntos de dados


// Função para mesclar dois subvetores ordenados
void merge(int *V, int esquerda, int meio, int direita) {
    // Tamanho dos dois subvetores
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    // Vetores temporários para armazenar os subvetores
    int L[n1], R[n2];

    // Copia os dados para os vetores temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = V[esquerda + i];
    for (int j = 0; j < n2; j++)
        R[j] = V[meio + 1 + j];

    // Índices para percorrer os vetores temporários L[] e R[]
    int i = 0, j = 0, k = esquerda;

    // Mescla os vetores L[] e R[] de volta para o vetor original V[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            V[k] = L[i];  // Se o elemento em L[] for menor ou igual, coloca no vetor original
            i++;
        } else {
            V[k] = R[j];  // Caso contrário, coloca o elemento de R[] no vetor original
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        V[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        V[k] = R[j];
        j++;
        k++;
    }
}

// Função recursiva para dividir o vetor e ordenar as sublistas
void mergeSort(int *V, int esquerda, int direita) {
    if (esquerda < direita) {
        // Calcula o ponto médio
        int meio = esquerda + (direita - esquerda) / 2;

        // Ordena a primeira metade
        mergeSort(V, esquerda, meio);

        // Ordena a segunda metade
        mergeSort(V, meio + 1, direita);

        // Mescla as duas metades ordenadas
        merge(V, esquerda, meio, direita);
    }
}

int main() {
    // Vetor desordenado para teste
    int vetor[] = {12, 11, 13, 5, 6, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);  // Calcula o tamanho do vetor

    // Exibe o vetor antes da ordenação
    printf("Vetor antes da ordenação: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Chama a função mergeSort para ordenar o vetor
    mergeSort(vetor, 0, tamanho - 1);

    // Exibe o vetor após a ordenação
    printf("\nVetor após a ordenação: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0; // Fim do programa
}

