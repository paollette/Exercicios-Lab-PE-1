// EXERCÍCIO CONCLUIDO E FUNCIONANDO

#include <stdio.h>

int main(void){

    printf("Exercício 2\n");

    int num1, num2, resto, maior, menor;

    while(1){
        menor = 1;

        printf("\n\nDigite os valores para o MDC:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);

        if ((num1 <= 1) || (num2 <= 1)) break;
        
        else if (num1 < num2){
            maior = num2;
            menor = num1;
        }
        else {
            maior = num1;
            menor = num2;
        }

        while(menor != 0){
            resto = maior % menor;
            maior = menor;
            menor = resto;
        }
            

        printf("O resultado do MDC é: %d", maior);

    }

    printf("\nPrograma Encerrado\n");
    return 0;
}