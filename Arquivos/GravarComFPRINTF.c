#include <stdlib.h>
#include <stdio.h>

int main() {
    char nome[30] = "Matheus"; // Declaração e inicialização de uma string (nome)
    int i = 19; // Idade
    float a = 1.84; // Altura

    FILE *f; // Declaração de ponteiro para o arquivo

    // Tenta abrir o arquivo no modo escrita ("w")
    // Se o arquivo não existir, ele será criado. Se já existir, será sobrescrito.
    f = fopen("GravarComFPRINTF.txt", "w");

    // Verifica se houve erro ao abrir o arquivo
    if (f == NULL) {
        // Se o arquivo não puder ser aberto, imprime uma mensagem de erro e encerra o programa
        printf("Erro na abertura do arquivo\n");
        return 1; // Encerra o programa com código de erro
    }

    // Exibe os dados na tela (console)
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, a);

    // Grava os mesmos dados no arquivo "GravarComFPRINTF.txt"
    fprintf(f, "Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, a);

    fclose(f);

    printf("Operação concluída com sucesso!\n\n");

    return 0;
}

