#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocando memória para o vetor
    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenchendo e exibindo o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberando a memória
    free(vetor);

    return 0;
}
