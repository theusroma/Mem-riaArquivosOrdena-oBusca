#include <stdio.h>

int main() {
    // Nomes do arquivo antes e depois da renomea��o
    const char *nomeAntigo = "arquivo_antigo.txt";
    const char *nomeNovo = "arquivo_novo.txt";

    // Renomeia o arquivo usando a fun��o rename()
    if (rename(nomeAntigo, nomeNovo) == 0) {
        // Se a renomea��o for bem-sucedida
        printf("O arquivo foi renomeado com sucesso para '%s'.\n", nomeNovo);
    } else {
        // Se a renomea��o falhar
        printf("Falha ao renomear o arquivo. Certifique-se de que o arquivo exista e tenha permiss�es adequadas.\n");
    }

    return 0;
}

