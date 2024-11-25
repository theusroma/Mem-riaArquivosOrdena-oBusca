#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> // Biblioteca para manipula��o de strings (n�o utilizada neste c�digo, mas inclu�da)

int main() { 
    FILE *f; // Declara um ponteiro para o arquivo

    f = fopen("Varia��oFPUTS.txt", "w"); 
    // Abre o arquivo "Varia��oFPUTS.txt" no modo de escrita ("w").
    // Se o arquivo n�o existir, ele ser� criado. Se j� existir, ser� sobrescrito.

    if(f == NULL) {
        // Verifica se ocorreu erro ao abrir o arquivo.
        // Se fopen retornar NULL, significa que houve algum problema ao abrir o arquivo.
        printf("Erro na abertura do arquivo");
        return 1; // Retorna 1 e encerra o programa em caso de erro.
    }

    fputs("Oii", f); // Escreve a string "Oii" no arquivo.
    fputs("pessoal", f); // Escreve a string "pessoal" no arquivo ap�s "Oii".
    
    fclose(f); 
    // Fecha o arquivo, liberando os recursos utilizados.
    
    printf("deu certuu"); 
    // Mensagem indicando que o programa foi executado com sucesso.

    return 0; 
}

