#include <stdio.h>

int main() {
    // Nomes do arquivo antes e depois da renomeação
    const char *nomeAntigo = "arquivo_antigo.txt";
    const char *nomeNovo = "arquivo_novo.txt";

    // Renomeia o arquivo usando a função rename()
    if (rename(nomeAntigo, nomeNovo) == 0) {
        // Se a renomeação for bem-sucedida
        printf("O arquivo foi renomeado com sucesso para '%s'.\n", nomeNovo);
    } else {
        // Se a renomeação falhar
        printf("Falha ao renomear o arquivo. Certifique-se de que o arquivo exista e tenha permissões adequadas.\n");
    }

    return 0;
}

