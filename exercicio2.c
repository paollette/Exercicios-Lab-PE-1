#include <stdio.h>

int main(void){
    int num1, num2, resultado, resto, maior, menor;

    while(1){
        printf("\n\nDigite os valores para o MDC:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);

        if ((num1 <= 1) || (num2 <= 1)) break;
        else{
            while(menor != 0){
                if (num1 < num2){
                    maior = num2;
                    menor = num1;
                }
                else {
                    maior = num1;
                    menor = num2;
                }
                resto = maior % menor;
                maior = menor;
                menor = resto;
            }
            resultado = menor;
        }

        printf("O resultado do MDC é: %d", &resultado);

        }

    return 0;
}