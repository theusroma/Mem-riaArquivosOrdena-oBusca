#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f; 
    char texto[90] = "Meu nome é Matheuzinho tropa"; // Texto a ser gravado no arquivo
    int i; 

    f = fopen("GravarComFPUTC.txt", "w"); 
    // Abre o arquivo "GravarComFPUTC.txt" no modo de escrita ("w").
    // Se o arquivo não existir, ele será criado. Se já existir, será sobrescrito.

    if(f == NULL) {
        printf("Erro na abertura do arquivo");
        return 1;
    }

    // Loop para gravar cada caractere do array 'texto' no arquivo
    for(i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f); // Escreve o caractere texto[i] no arquivo.
    }
    
    fclose(f); 

    return 0; 
}

