 #include <stdio.h>

int main() {
    int N;      
    int i;    
    int eh_primo = 1; // Flag: assume-se que é primo (1=true, 0=false)

        do {
        printf("Digite um número inteiro N (N >= 2): ");
        scanf("%d", &N);
        if (N < 2) {
            printf("Entrada inválida. N deve ser maior ou igual a 2.\n");
        }
    } while (N < 2);

    for (i = 2; i * i <= N; i++) {
        if (N % i == 0) {
                      eh_primo = 0; 
            break;               }
    }

  
    if (eh_primo == 1) {
             printf("\nO número %d É PRIMO.\n", N);
    } else {
                printf("\nO número %d NÃO É PRIMO.\n", N);
        printf("O menor divisor (>1) é: %d\n", i);
    }

    return 0;
}
