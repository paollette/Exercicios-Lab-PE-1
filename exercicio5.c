// EXERCÍCIO CONCLUIDO E FUNCIONANDO

#include <stdio.h>

int main(void){
    
    printf("Exercício 5\n");

    int n, i, j;

    while(1){

        printf("\nDigite o número que gostaria de analisar os primos menores ou iguais a ele: ");
        scanf("%d", &n);

        if (n < 2) break;

        printf("\nOs primos menores ou iguais a ele são: \n");

        for(i = 1; i <= n; i++){

            int contador = 0;

            for(j = 1; j <= i; j++){
                if ((i % j) == 0) contador++;
            }

            if (contador == 2) printf("%d\n", i);
        }

    }

    printf("\nPrograma Encerrado\n");
    return 0;
}