#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f; 
    char texto[100] = "Estou gravando dados no arquivo usando FPUTS"; // Texto a ser gravado no arquivo
    int retorno; // Variável para armazenar o retorno de fputs
    
    f = fopen("GravarComFPUTS.txt", "w"); 
    // Abre o arquivo "GravarComFPUTS.txt" no modo de escrita ("w").
    // Se o arquivo não existir, será criado. Se já existir, o conteúdo será sobrescrito.

    if(f == NULL) {
        // Verifica se o arquivo foi aberto corretamente. Se não, imprime mensagem de erro e encerra.
        printf("Erro na abertura do arquivo");
        return 1; // Retorna 1 e encerra o programa em caso de erro.
    }
    
    retorno = fputs(texto, f); // Usa fputs para gravar a string 'texto' no arquivo.
    // fputs retorna EOF em caso de erro, e o valor do número de caracteres gravados em caso de sucesso.
    
    // Alternativamente, pode-se gravar diretamente:
    // fputs("Estou gravando dados no arquivo usando FPUTS", f);
    
    if(retorno == EOF) {
        printf("Erro na gravação");
    }
    
    fclose(f); 

    
    printf("deu certo?"); 
    
    return 0; 
}

