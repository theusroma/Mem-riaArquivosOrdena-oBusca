#include <stdio.h>

int main() {
    // Abre o arquivo "exemplo.txt" no modo de escrita
    FILE *arquivo;  // Declara um ponteiro para o arquivo
    
    arquivo = fopen("exemplo.txt", "w");  // Abre o arquivo no modo de escrita ("w")
    // Caso o arquivo não exista, ele será criado. Se já existir, seu conteúdo será sobrescrito.

    // Dados a serem escritos no arquivo
    int numero = 42;  // Um número inteiro a ser gravado no arquivo
    double pi = 3.141592;  // Um valor numérico de ponto flutuante (valor de PI)
    char texto[] = "Hello, World!";  // Uma string a ser gravada no arquivo

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {  
        // Se o arquivo não foi aberto corretamente, exibe um erro
        printf("Erro ao abrir o arquivo");
        return 1;  // Sai do programa com código de erro 1
    }

    // Escreve os dados no arquivo
    fprintf(arquivo, "Número: %d\n", numero);  // Escreve o número inteiro no arquivo
    fprintf(arquivo, "Valor de PI: %lf\n", pi);  // Escreve o valor de PI (double) no arquivo
    fprintf(arquivo, "Texto: %s\n", texto);  // Escreve a string no arquivo

    // Fecha o arquivo e verifica se foi fechado corretamente
    if (fclose(arquivo) == 0) {  
        // Tenta fechar o arquivo. Se for fechado com sucesso, retorna 0
        printf("Arquivo fechado com sucesso.\n");  // Mensagem de sucesso
    } else {
        // Se falhar ao fechar o arquivo, exibe mensagem de erro
        printf("Erro ao fechar o arquivo");
    }

    return 0;  // Encerra o programa com sucesso
}
