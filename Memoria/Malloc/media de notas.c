#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int i, n, media, soma = 0;
	
	
	printf("Digite a quantidade de notas de um aluno: ");
	scanf("%d", &n);
	
	int *vetor = (int *)malloc(n * sizeof(int));
	if(vetor == NULL){
		printf("A alocação deu errado!");
		return 1;
	}
	
	
	for(i=0; i<n; i++){
	printf("Digite a nota %d do aluno: ", i+1);
	scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<n; i++){
		soma += vetor[i];
	}
	
	media = soma / n;
	
	printf("soma das notas: %d\n", soma);
	printf("media das notas: %d\n", media); 
//	eu devia ter feito a media em float
	
	return 0;
}
