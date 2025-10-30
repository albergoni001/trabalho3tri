 #include <stdio.h>


#define MAX_N 10


void listar_salarios(float salarios[], int N);
void calcular_media(float salarios[], int N);

int main() {
    float salarios[MAX_N]; // Vetor para armazenar os salários
    int N;                
    int opcao;            
       do {
        printf("Informe o número de salários (N) a serem lidos (1 a %d): ", MAX_N);
        if (scanf("%d", &N) != 1) {
           
            while (getchar() != '\n');
            N = -1; // Garante que o loop continue
        }
        if (N < 1 || N > MAX_N) {
            printf("Erro: N deve ser um número entre 1 e %d.\n", MAX_N);
        }
    } while (N < 1 || N > MAX_N);

        printf("\n--- Leitura dos Salários ---\n");
    for (int i = 0; i < N; i++) {
        do {
            printf("Salário do colaborador %d: R$ ", i + 1);
            if (scanf("%f", &salarios[i]) != 1 || salarios[i] < 0) {
                printf("Erro: Salário inválido. Digite um valor positivo.\n");
                // Limpa o buffer para nova tentativa
                while (getchar() != '\n');
            } else {
                break; // Sai do do-while interno se o salário for válido
            }
        } while (1);
    }
    
  
    while (getchar() != '\n'); 

        do {
                printf("\n======================================\n");
        printf("  MENU DE OPÇÕES (%d Salários Lidos)\n", N);
        printf("======================================\n");
        printf("1) Listar salários\n");
        printf("2) Média dos salários\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");

                if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Opção inválida. Digite apenas um número.\n");
                       while (
