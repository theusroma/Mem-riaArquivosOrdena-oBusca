#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int i, n, media, soma = 0;
	
	
	printf("Digite a o tamanho do vetor: ");
	scanf("%d", &n);
	
	int *vetor = (int *)malloc(n * sizeof(int));
	if(vetor == NULL){
		printf("A alocação deu errado!");
		return 1;
	}
	
	
	for(i=0; i<n; i++){
	printf("Insira um valor no indice[%d]: ", i);
	scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d ",vetor[i] * 2);
	}
	
	return 0;
}
