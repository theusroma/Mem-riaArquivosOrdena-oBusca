#include <stdlib.h>
#include <stdio.h>

int main() {
    char nome[30] = "Matheus"; // Declara��o e inicializa��o de uma string (nome)
    int i = 19; // Idade
    float a = 1.84; // Altura

    FILE *f; // Declara��o de ponteiro para o arquivo

    // Tenta abrir o arquivo no modo escrita ("w")
    // Se o arquivo n�o existir, ele ser� criado. Se j� existir, ser� sobrescrito.
    f = fopen("GravarComFPRINTF.txt", "w");

    // Verifica se houve erro ao abrir o arquivo
    if (f == NULL) {
        // Se o arquivo n�o puder ser aberto, imprime uma mensagem de erro e encerra o programa
        printf("Erro na abertura do arquivo\n");
        return 1; // Encerra o programa com c�digo de erro
    }

    // Exibe os dados na tela (console)
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, a);

    // Grava os mesmos dados no arquivo "GravarComFPRINTF.txt"
    fprintf(f, "Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, a);

    fclose(f);

    printf("Opera��o conclu�da com sucesso!\n\n");

    return 0;
}

