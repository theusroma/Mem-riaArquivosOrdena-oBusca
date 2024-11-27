#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de escrita
    FILE *arquivo = fopen("exemplo.txt", "w");  // Abre o arquivo em modo de escrita ("w")

    // Declara e inicializa uma variável para armazenar o caractere a ser escrito
    char caracter = 'A';  // O caractere 'A' que será escrito no arquivo

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        // Se o arquivo não foi aberto corretamente, exibe um erro
        printf("Erro ao abrir o arquivo");
        return 1;  // Sai do programa com código de erro 1
    }

    // Escreve o caractere no arquivo
    if (fputc(caracter, arquivo) != EOF) {
        // A função fputc escreve um único caractere no arquivo
        // Se a escrita for bem-sucedida, fputc não retorna EOF (end of file)
        printf("Caractere escrito com sucesso no arquivo.\n");
    } else {
        // Caso a escrita falhe, exibe mensagem de erro
        printf("Erro ao escrever o caractere no arquivo");
    }

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        // Tenta fechar o arquivo, se for bem-sucedido, retorna 0
        printf("\nArquivo fechado com sucesso.\n");
        return 0;  // Encerra o programa com sucesso
    } else {
        // Se falhar ao fechar o arquivo, exibe mensagem de erro
        printf("Erro ao fechar o arquivo");
        return 1;  // Sai do programa com erro
    }
}
