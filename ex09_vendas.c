 #include <stdio.h>
#include <stdlib.h>

#define FILIAIS 2
#define MESES 2

void exibirMatriz(float vendas[FILIAIS][MESES]) {
    printf("\n--- Matriz de Vendas (R$) ---\n");
    printf("        Mês 1    Mês 2\n");
    for (int i = 0; i < FILIAIS; i++) {
        printf("Filial %d: ", i + 1);
        for (int j = 0; j < MESES; j++) {
            printf("%7.2f", vendas[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------\n");
}

int main() {
   )
    float vendas[FILIAIS][MESES];
    int opcao;

       printf("--- Leitura de Vendas (R$) ---\n");
    for (int i = 0; i < FILIAIS; i++) {
        for (int j = 0; j < MESES; j++) {
            printf("Digite o valor de vendas da Filial %d, Mês %d: ", i + 1, j + 1);
         
            if (scanf("%f", &vendas[i][j]) != 1) {
                printf("Erro na leitura. Certifique-se de digitar um número.\n");
                              while (getchar() != '\n');
                j--;
            }
        }
    }

     exibirMatriz(vendas);

       do {
        printf("\n--- Menu: Totais Simples ---\n");
        printf("1) Total por filial (linha)\n");
        printf("2) Total por mês (coluna)\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

              if (scanf("%d", &opcao) != 1) {
            printf("\nOpção inválida. Digite um número de 0 a 3.\n");
          
