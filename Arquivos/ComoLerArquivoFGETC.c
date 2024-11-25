#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> // Biblioteca para manipulação de strings (não usada neste código, mas incluída)

int main() { 
    FILE *f; // Declara um ponteiro do tipo FILE para manipular o arquivo
    int i;   // Variável de controle para o loop
    char c;  // Variável para armazenar caracteres lidos do arquivo

    // Abre o arquivo "textu.txt" no modo de leitura ("r")
    f = fopen("ComoLerArquivoFGETC.txt", "r");
    if (f == NULL) {
        printf("Erro em abrir o arquivo");
        return 1; // Retorna código de erro
    }

	c = fgetc(f); // Lê o primeiro caractere do arquivo apontado por 'f'

	while (c != EOF) { // Continua o loop enquanto o caractere lido não for o "fim do arquivo" (EOF)
    printf("%c", c); // Imprime o caractere lido na tela
    c = fgetc(f); // Lê o próximo caractere do arquivo para a próxima iteração
	}

   

    // Fecha o arquivo
    fclose(f);

    // Mensagem de sucesso exibida se der certo
    printf("\n\n\ndeu certo parabens");

    return 0; 
}



// OUTRO JEITO DE LER
// for (i = 0; i < 33; i++) {
//        // Lê UM por vez caractere do arquivo usando fgetc
//        c = fgetc(f);
//
//        // Imprime o caractere lido do arquivo na tela
//        printf("%c", c);
//    }

