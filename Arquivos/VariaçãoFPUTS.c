#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> // Biblioteca para manipulação de strings (não utilizada neste código, mas incluída)

int main() { 
    FILE *f; // Declara um ponteiro para o arquivo

    f = fopen("VariaçãoFPUTS.txt", "w"); 
    // Abre o arquivo "VariaçãoFPUTS.txt" no modo de escrita ("w").
    // Se o arquivo não existir, ele será criado. Se já existir, será sobrescrito.

    if(f == NULL) {
        // Verifica se ocorreu erro ao abrir o arquivo.
        // Se fopen retornar NULL, significa que houve algum problema ao abrir o arquivo.
        printf("Erro na abertura do arquivo");
        return 1; // Retorna 1 e encerra o programa em caso de erro.
    }

    fputs("Oii", f); // Escreve a string "Oii" no arquivo.
    fputs("pessoal", f); // Escreve a string "pessoal" no arquivo após "Oii".
    
    fclose(f); 
    // Fecha o arquivo, liberando os recursos utilizados.
    
    printf("deu certuu"); 
    // Mensagem indicando que o programa foi executado com sucesso.

    return 0; 
}

