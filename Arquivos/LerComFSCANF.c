#include <stdlib.h>
#include <stdio.h>

int main() {
    char texto[20], nome[30]; // Declara as vari�veis para armazenar texto e nome
    int id; // Vari�vel para armazenar a idade
    float h; // Vari�vel para armazenar a altura

    FILE *f; // Declara��o do ponteiro para o arquivo

    // Abre o arquivo "LerComFSCANF.txt" no modo leitura ("r")
    // O arquivo deve existir; caso contr�rio, o programa retornar� erro
    f = fopen("LerComFSCANF.txt", "r");

    // Verifica se houve erro ao abrir o arquivo
    if (f == NULL) {
        printf("Erro na abertura do arquivo\n");
        return 1; // Encerra o programa com c�digo de erro
    }

    // L� duas strings do arquivo e armazena em 'texto' e 'nome'
    fscanf(f, "%s %s", texto, nome);
    printf("%s %s\n", texto, nome);  // Exibe no console

    // L� uma string e um inteiro do arquivo e os armazena em 'texto' e 'id'
    fscanf(f, "%s %d", texto, &id);
    printf("%s %d\n", texto, id);  // Exibe no console

    // L� uma string e um n�mero de ponto flutuante do arquivo e os armazena em 'texto' e 'h'
    fscanf(f, "%s %f", texto, &h);
    printf("%s %.2f\n", texto, h);  // Exibe no console

    fclose(f);  // Fecha o arquivo ap�s a leitura

    printf("Opera��o conclu�da com sucesso!\n\n");  

    return 0;
}

