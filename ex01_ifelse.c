1 #include <stdio.h>

int main() {
    int numero;

       printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro na leitura. Por favor, digite um número inteiro válido.\n");
        return 1; 
    }

       printf("\n--- Classificação de Sinal ---\n");
    if (numero > 0) {
        printf("O número %d é **Positivo**.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é **Negativo**.\n", numero);
    } else {
        printf("O número %d é **Zero**.\n", numero);
    }

      printf("\n--- Classificação de Paridade ---\n");

       if (numero % 2 == 0) {
        printf("O número %d é **Par**.\n", numero);
    } else {
        printf("O número %d é **Ímpar**.\n", numero);
    }
    
    return 0;
}
