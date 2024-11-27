#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de leitura
    FILE *arquivo = fopen("exemplo.txt", "r");

    // Buffer para armazenar a linha lida do arquivo
    char linha[100];

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1; // Sai do programa com erro
    }

    // Lê uma linha do arquivo e verifica se foi lida com sucesso
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        // `fgets` lê uma linha e a armazena no buffer `linha`
        printf("Linha lida do arquivo: %s", linha);
    } else {
        printf("Erro ao ler a linha do arquivo\n");
    }

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        printf("\nArquivo fechado com sucesso.\n");
        return 0; // Encerra o programa com sucesso
    } else {
        printf("Erro ao fechar o arquivo\n");
        return 1; // Sai do programa com erro
    }
}

