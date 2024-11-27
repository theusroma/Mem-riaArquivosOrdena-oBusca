#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de escrita ("w")
    FILE *arquivo = fopen("exemplo.txt", "w");  // Abre o arquivo para escrita. Se não existir, será criado.

    // String que será escrita no arquivo
    const char *texto = "Esta é uma linha de exemplo.";  // A string a ser escrita no arquivo

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        // Se o arquivo não foi aberto corretamente, exibe um erro
        printf("Erro ao abrir o arquivo\n");
        return 1;  // Sai do programa com erro (1)
    }

    // Tenta escrever a string no arquivo
    if (fputs(texto, arquivo) != EOF) {
        // fputs escreve uma string no arquivo. Se for bem-sucedido, retorna algo diferente de EOF (End Of File)
        printf("String escrita no arquivo com sucesso.\n");
    } else {
        // Se a escrita falhar, exibe uma mensagem de erro
        printf("Erro ao escrever a string no arquivo\n");
    }

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        // Tenta fechar o arquivo. Se for bem-sucedido, retorna 0
        printf("\nArquivo fechado com sucesso.\n");
        return 0;  // Encerra o programa com sucesso (0)
    } else {
        // Se falhar ao fechar o arquivo, exibe mensagem de erro
        printf("Erro ao fechar o arquivo\n");
        return 1;  // Sai do programa com erro (1)
    }
}
