#include <stdio.h>

int main() {
    // Nome do arquivo que ser� exclu�do
    const char *nomeArquivo = "exemplo.txt";

    // Remove o arquivo usando a fun��o remove()
    if (remove(nomeArquivo) == 0) {
        // Se a remo��o for bem-sucedida
        printf("O arquivo '%s' foi exclu�do com sucesso.\n", nomeArquivo);
    } else {
        // Se a remo��o falhar
        printf("Falha ao excluir o arquivo '%s'. Certifique-se de que o arquivo exista e tenha permiss�es adequadas.\n", nomeArquivo);
    }

    return 0;
}

