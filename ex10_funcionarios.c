 #include <stdio.h>
#include <stdlib.h>
#define MAX_FUNCIONARIOS 10

int main() {
  
    int ids[MAX_FUNCIONARIOS];
    double salarios[MAX_FUNCIONARIOS];
    
     int num_funcionarios = 0; 
    
    int opcao;

       printf("--- Cadastro de Funcionários ---\n");
    
      printf("Quantos funcionários deseja cadastrar (1 a %d)? ", MAX_FUNCIONARIOS);
   
    while (scanf("%d", &num_funcionarios) != 1 || num_funcionarios < 1 || num_funcionarios > MAX_FUNCIONARIOS) {
        printf("Número inválido. Digite um valor entre 1 e %d: ", MAX_FUNCIONARIOS);
               while (getchar() != '\n'); 
    }

    for (int i = 0; i < num_funcionarios; i++) {
        printf("\n--- Funcionário %d ---\n", i + 1);
        
              printf("Digite o ID (inteiro): ");
        while (scanf("%d", &ids[i]) != 1) {
            printf("ID inválido. Digite um número inteiro: ");
            while (getchar() != '\n');
        }
        
               printf("Digite o Salário (double): R$ ");
        while (scanf("%lf", &salarios[i]) != 1) { // %lf é usado para ler double
            printf("Salário inválido. Digite um valor numérico: R$ ");
            while (getchar() != '\n');
        }
    }







      2.   do {
        printf("\n--- Menu RH ---\n");
        printf("1) Listar todos (ID e Salário)\n");
        printf("2) Mostrar o maior salário e seu ID\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

              if (scanf("%d", &opcao) != 1) {
            printf("\nOpção inválida. Digite um número (0, 1 ou 2).\n");
                      while (getchar() != '\n'); 
            opcao = -1        }

        switch (opcao) {
            case 1: {
                printf("\n--- Lista de Funcionários ---\n");
                printf("ID     | Salário (R$)\n");
                printf("-------|--------------\n");
                for (int i = 0; i < num_funcionarios; i++) {
                   
                    printf("%-6d | %.2f\n", ids[i], salarios[i]);
                }
                break;
            }
            case 2: {
                if (num_funcionarios == 0) {
                    printf("Nenhum funcionário cadastrado.\n");
                    break;
                }
                
               
                double maior_salario = salarios[0];
                int id_maior_salario = ids[0];
                
                                for (int i = 1; i < num_funcionarios; i++) {
                    if (salarios[i] > maior_salario) {
                        maior_salario = salarios[i];
                        id_maior_salario = ids[i];
                    }
                }
                
                printf("\n--- Maior Salário ---\n");
                printf("O maior salário é: R$ %.2f\n", maior_salario);
                printf("ID do funcionário: %d\n", id_maior_salario);
                break;
            }
            case 0: { 

                printf("\nSaindo do programa. Até mais!\n");
                break;
            }
            default: {
                printf("\nOpção inválida. Por favor, escolha 0, 1 ou 2.\n");
                break;
            }
        }
    } while (opcao != 0); 
    return 0;
}
