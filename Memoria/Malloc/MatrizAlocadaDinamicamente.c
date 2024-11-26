#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;

    printf("Digite o n�mero de linhas (n): ");
    scanf("%d", &n);
    printf("Digite o n�mero de colunas (m): ");
    scanf("%d", &m);

    // Alocando mem�ria para um vetor de ponteiros (linhas da matriz)
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar mem�ria para as linhas.\n");
        return 1;
    }

    // Alocando mem�ria para cada linha da matriz
    for (i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar mem�ria para a linha %d.\n", i);
            return 1;
        }
    }

    // Preenchendo a matriz com a soma dos �ndices
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Exibindo a matriz
    printf("Matriz preenchida:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a mem�ria alocada
    for (i = 0; i < n; i++) {
        free(matriz[i]); // Liberar cada linha
    }
    free(matriz); // Liberar o vetor de ponteiros

    return 0;
}

