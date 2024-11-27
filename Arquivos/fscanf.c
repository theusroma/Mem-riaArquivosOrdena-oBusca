#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de leitura ("r")
    FILE *arquivo = fopen("exemplo.txt", "r");  // Tenta abrir o arquivo para leitura. Se não existir, retornará NULL.

    // Variáveis para armazenar os dados lidos do arquivo
    int numero;           // Variável para armazenar um número inteiro
    double pi;            // Variável para armazenar um número decimal (PI)
    char texto[50];       // Buffer para armazenar uma string de até 49 caracteres (com o '\0' no final)

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        // Se o arquivo não for aberto, exibe um erro
        printf("Erro ao abrir o arquivo\n");
        return 1;  // Sai do programa com erro (1)
    }

    // Lê os dados do arquivo
    fscanf(arquivo, "%d", &numero);   // Lê um inteiro e armazena na variável 'numero'
    fscanf(arquivo, "%lf", &pi);      // Lê um número decimal (double) e armazena na variável 'pi'
    fscanf(arquivo, "%s", texto);     // Lê uma string e armazena no buffer 'texto'

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        // Se o arquivo for fechado corretamente (fclose retorna 0), exibe os dados lidos
        printf("Dados lidos do arquivo:\n");
        printf("Número: %d\n", numero);   // Exibe o número lido
        printf("Valor de PI: %lf\n", pi); // Exibe o valor de PI lido
        printf("Texto: %s\n", texto);     // Exibe o texto lido
    } else {
        // Se o arquivo não for fechado corretamente, exibe uma mensagem de erro
        printf("Erro ao fechar o arquivo\n");
    }

    return 0;  // Sai do programa com sucesso
}
