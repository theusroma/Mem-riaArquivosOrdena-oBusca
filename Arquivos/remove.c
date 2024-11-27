#include <stdio.h>

int main() {
    // Nome do arquivo que será excluído
    const char *nomeArquivo = "exemplo.txt";

    // Remove o arquivo usando a função remove()
    if (remove(nomeArquivo) == 0) {
        // Se a remoção for bem-sucedida
        printf("O arquivo '%s' foi excluído com sucesso.\n", nomeArquivo);
    } else {
        // Se a remoção falhar
        printf("Falha ao excluir o arquivo '%s'. Certifique-se de que o arquivo exista e tenha permissões adequadas.\n", nomeArquivo);
    }

    return 0;
}

