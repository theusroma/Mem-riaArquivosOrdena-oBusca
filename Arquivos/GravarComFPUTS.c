#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f; 
    char texto[100] = "Estou gravando dados no arquivo usando FPUTS"; // Texto a ser gravado no arquivo
    int retorno; // Vari�vel para armazenar o retorno de fputs
    
    f = fopen("GravarComFPUTS.txt", "w"); 
    // Abre o arquivo "GravarComFPUTS.txt" no modo de escrita ("w").
    // Se o arquivo n�o existir, ser� criado. Se j� existir, o conte�do ser� sobrescrito.

    if(f == NULL) {
        // Verifica se o arquivo foi aberto corretamente. Se n�o, imprime mensagem de erro e encerra.
        printf("Erro na abertura do arquivo");
        return 1; // Retorna 1 e encerra o programa em caso de erro.
    }
    
    retorno = fputs(texto, f); // Usa fputs para gravar a string 'texto' no arquivo.
    // fputs retorna EOF em caso de erro, e o valor do n�mero de caracteres gravados em caso de sucesso.
    
    // Alternativamente, pode-se gravar diretamente:
    // fputs("Estou gravando dados no arquivo usando FPUTS", f);
    
    if(retorno == EOF) {
        printf("Erro na grava��o");
    }
    
    fclose(f); 

    
    printf("deu certo?"); 
    
    return 0; 
}

