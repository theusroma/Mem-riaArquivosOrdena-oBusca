#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de escrita
    FILE *arquivo; 
	
	arquivo = fopen("exemplo.txt", "w");

    // Dados a serem escritos no arquivo
    int numero = 42;
    double pi = 3.141592;
    char texto[] = "Hello, World!";

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    // Escreve os dados no arquivo
    fprintf(arquivo, "Número: %d\n", numero);
    fprintf(arquivo, "Valor de PI: %lf\n", pi);
    fprintf(arquivo, "Texto: %s\n", texto);

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo");
    }

    return 0;
}

