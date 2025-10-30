#include <stdio.h>
#include <string.h>
#include <ctype.h> 

#define MAX_CHARS 101 // 100 caracteres + 1 para o terminador '\0'

int main() {
    char linha[MAX_CHARS]; 
    int contador_vogais = 0; 
    int i;

  
    printf("Digite uma linha (máximo de 100 caracteres):\n");
      
    if (fgets(linha, MAX_CHARS, stdin) == NULL) {
      
        return 1;
    }

         for (i = 0; linha[i] != '\0'; i++) {
             char caractere_minusculo = tolower(linha[i]);

               if (caractere_minusculo == 'a' || 
            caractere_minusculo == 'e' || 
            caractere_minusculo == 'i' || 
            caractere_minusculo == 'o' || 
            caractere_minusculo == 'u') {
            
            contador_vogais++; // Incrementa o contador
        }
    }

        printf("\nTotal de vogais encontradas: %d\n", contador_vogais);

    return 0;
}
