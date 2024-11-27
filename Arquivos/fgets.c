#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de leitura
    FILE *arquivo = fopen("exemplo.txt", "r");  // Abre o arquivo para leitura ("r")

    // Buffer para armazenar a linha lida do arquivo
    char linha[100];  // Um buffer para armazenar a linha lida do arquivo, com tamanho 100

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {  
        // Se a abertura do arquivo falhar, mostra uma mensagem de erro
        printf("Erro ao abrir o arquivo\n");
        return 1; // Sai do programa com erro, código 1
    }

    // Lê uma linha do arquivo e verifica se foi lida com sucesso
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {  
        // `fgets` lê até 99 caracteres (ou até encontrar uma nova linha) e armazena no buffer 'linha'
        printf("Linha lida do arquivo: %s", linha);  // Exibe a linha lida
    } else {
        printf("Erro ao ler a linha do arquivo\n");  // Se não conseguir ler, exibe erro
    }

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {  
        // `fclose` fecha o arquivo. Se o arquivo for fechado com sucesso, o valor retornado será 0.
        printf("\nArquivo fechado com sucesso.\n");  // Mensagem de sucesso ao fechar o arquivo
        return 0; // Encerra o programa com sucesso
    } else {
        printf("Erro ao fechar o arquivo\n");  // Caso ocorra erro ao fechar o arquivo
        return 1; // Sai do programa com erro
    }
}
