#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[30]; // Array para armazenar o texto lido do arquivo.
    
    FILE *f;
    f = fopen("LendoComFGETS.txt", "r"); 
    if (f == NULL) { 
        // Verifica se o arquivo foi aberto corretamente. 
        // Se fopen retornar NULL, exibe erro e encerra o programa.
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    
    // Lê até 9 caracteres (10 menos 1 para o caractere nulo) do arquivo e os armazena em 'str'.
    // A leitura é interrompida se encontrar um '\n' antes ou atingir o limite.
    fgets(str, 10, f); 
    printf("%s", str); // Exibe o texto lido.

    fclose(f); // Fecha o arquivo para liberar recursos.
    
    printf("\n\ndeu certo"); // Mensagem indicando que o programa foi executado com sucesso.
    
    return 0;
}

