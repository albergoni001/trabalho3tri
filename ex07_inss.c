 #include <stdio.h>

// Definindo as constantes solicitadas
#define TAXA_INSS 0.08      
#define HORAS_MES 220.0    
#define ADICIONAL_HE 1.5   

void calcular_inss(double salario) {
    double valor_inss = salario * TAXA_INSS;
    printf("\n[RESULTADO INSS]\n");
    printf("Salário Mensal: R$ %.2f\n", salario);
    printf("Alíquota INSS: %.0f%%\n", TAXA_INSS * 100);
    printf("Valor do INSS a ser deduzido: R$ %.2f\n", valor_inss);
}

void calcular_hora_extra(double salario) {
    double valor_hora_base;
    double valor_hora_extra;
    double horas_extra_trabalhadas;
    double valor_total_he;

        valor_hora_base = salario / HORAS_MES;

  
    valor_hora_extra = valor_hora_base * ADICIONAL_HE;

    printf("\n[CALCULAR HORAS EXTRAS]\n");
    printf("Valor-hora base (Salário / 220): R$ %.2f\n", valor_hora_base);
    printf("Valor-hora extra (Base + 50%%): R$ %.2f\n", valor_hora_extra);
    
    printf("Informe a quantidade de horas extras trabalhadas: ");
    if (scanf("%lf", &horas_extra_trabalhadas) != 1 || horas_extra_trabalhadas < 0) {
        printf("Erro: Entrada inválida. Use um número positivo.\n");
       
        while (getchar() != '\n'); 
        return;
    }

      valor_total_he = horas_extra_trabalhadas * valor_hora_extra;

    printf("Valor total das Horas Extras (%.2f h * R$ %.2f): R$ %.2f\n",
           horas_extra_trabalhadas, valor_hora_extra, valor_total_he);
}

int main() {
    double salario;
    int opcao;

   
    printf("--- INFORMAÇÕES INICIAIS ---\n");
    printf("Informe o salário mensal do colaborador: R$ ");
    if (scanf("%lf", &salario) != 1 || salario < 0) {
        printf("Erro: Salário inválido. O programa será encerrado.\n");
        return 1;
    }
   
    while (getchar() != '\n'); 

       do {
                printf("\n======================================\n");
        printf("  MENU DE CÁLCULOS (Salário: R$ %.2f)\n", salario);
        printf("======================================\n");
        printf("1) Calcular INSS (8%% do salário)\n");
        printf("2) Calcular valor das horas extras informadas\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

               if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Opção inválida. Digite apenas um número.\n");
            // Limpa o buffer para evitar loop infinito
            while (getchar() != '\n'); 
            opcao = -1; // Define uma opção inválida para não sair
            continue;
        }
        while (getchar() != '\n');

              switch (opcao) {
            case 1:
                calcular_inss(salario);
                break;
            case 2:
                calcular_hora_extra(salario);
                break;
            case 0:
                printf("\nEncerrando o programa. Até logo!\n");
                break;
            default:
                printf("\nOpção inválida. Tente novamente (1, 2 ou 0).\n");
                break;
        }
    } while (opcao != 0); 

    return 0;
}
