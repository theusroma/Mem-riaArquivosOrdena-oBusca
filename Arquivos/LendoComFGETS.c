#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[30]; // Array para armazenar o texto lido do arquivo.
    
    FILE *f;
    f = fopen("LendoComFGETS.txt", "r"); 
    if (f == NULL) { 
        // Verifica se o arquivo foi aberto corretamente. Se não, exibe erro e encerra.
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    
    // Lê até 9 caracteres (10 menos 1 para o caractere nulo) do arquivo e armazena em 'str'.
    // O ponteiro 'resultado' armazenará o valor retornado por fgets.
    char *resultado = fgets(str, 10, f); 
    
    if (resultado == NULL) { 
        // Verifica se houve erro na leitura ou se o arquivo está vazio.
        printf("Erro na leitura");
    } else { 
        // Se a leitura for bem-sucedida, exibe o conteúdo lido.
        printf("%s", str);
    }

    fclose(f); // Fecha o arquivo para liberar os recursos do sistema.
    
    printf("\n\ndeu certo"); // Mensagem indicando que o programa foi executado com sucesso.
    
    return 0;
}

