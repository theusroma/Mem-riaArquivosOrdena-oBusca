#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> // Biblioteca para manipula��o de strings (n�o usada neste c�digo, mas inclu�da)

int main() { 
    FILE *f; // Declara um ponteiro do tipo FILE para manipular o arquivo
    int i;   // Vari�vel de controle para o loop
    char c;  // Vari�vel para armazenar caracteres lidos do arquivo

    // Abre o arquivo "textu.txt" no modo de leitura ("r")
    f = fopen("ComoLerArquivoFGETC.txt", "r");
    if (f == NULL) {
        printf("Erro em abrir o arquivo");
        return 1; // Retorna c�digo de erro
    }

	c = fgetc(f); // L� o primeiro caractere do arquivo apontado por 'f'

	while (c != EOF) { // Continua o loop enquanto o caractere lido n�o for o "fim do arquivo" (EOF)
    printf("%c", c); // Imprime o caractere lido na tela
    c = fgetc(f); // L� o pr�ximo caractere do arquivo para a pr�xima itera��o
	}

   

    // Fecha o arquivo
    fclose(f);

    // Mensagem de sucesso exibida se der certo
    printf("\n\n\ndeu certo parabens");

    return 0; 
}



// OUTRO JEITO DE LER
// for (i = 0; i < 33; i++) {
//        // L� UM por vez caractere do arquivo usando fgetc
//        c = fgetc(f);
//
//        // Imprime o caractere lido do arquivo na tela
//        printf("%c", c);
//    }

