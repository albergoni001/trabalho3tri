   #include <stdio.h>

int main() {
    int numero;
    int soma = 0;        
    int quantidade = 0;    
    double media = 0.0;  
    printf("--- Calculadora de Soma e Média ---\n");
    printf("Digite inteiros sucessivos.\n");
    printf("Digite -1 para PARAR e ver os resultados.\n\n");

       printf("Digite um número: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro na leitura inicial.\n");
        return 1;
    }

    while (numero != -1) {
              soma = soma + numero;
        quantidade = quantidade + 1;

              printf("Digite outro número: ");
        if (scanf("%d", &numero) != 1) {
             printf("Erro na leitura. Interrompendo a leitura.\n");
             break; // Sai do loop em caso de erro
        }
    }

   )
    printf("\n--- Resultados ---\n");
    
       printf("Quantidade de números lidos (desconsiderando o -1): %d\n", quantidade);
    printf("Soma total dos números: %d\n", soma);

      if (quantidade > 0) {
        media = (double)soma / quantidade;
        printf("Média dos números: %.2lf\n", media); // Formato .2lf para duas casas decimais
    } else {
        printf("Nenhum número válido foi digitado antes de -1.\n");
    }

    return 0;
}
