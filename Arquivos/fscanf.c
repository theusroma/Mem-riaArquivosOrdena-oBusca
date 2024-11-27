#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de leitura
    FILE *arquivo = fopen("exemplo.txt", "r");

    // Variáveis para armazenar os dados lidos do arquivo
    int numero;
    double pi;
    char texto[50];

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    // Lê os dados do arquivo
    fscanf(arquivo, "%d", &numero);
    fscanf(arquivo, "%lf", &pi);
    fscanf(arquivo, "%s", texto);

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        // Exibe os dados lidos
        printf("Dados lidos do arquivo:\n");
        printf("Número: %d\n", numero);
        printf("Valor de PI: %lf\n", pi);
        printf("Texto: %s\n", texto);
    } else {
        printf("Erro ao fechar o arquivo\n");
    }

    return 0;
}

