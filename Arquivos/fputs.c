#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de escrita
    FILE *arquivo = fopen("exemplo.txt", "w");

    // String que será escrita no arquivo
    const char *texto = "Esta é uma linha de exemplo.";

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1; // Sai do programa com erro
    }

    // Tenta escrever a string no arquivo
    if (fputs(texto, arquivo) != EOF) {
        printf("String escrita no arquivo com sucesso.\n");
    } else {
        printf("Erro ao escrever a string no arquivo\n");
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

