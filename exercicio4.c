// EXERCÍCIO CONCLUIDO E FUNCIONANDO

#include <stdio.h>

int main(void){

    printf("Exercício 4\n");

    int n, i;

    while(1){
        
        printf("\n\nDigite o número que gostaria de analisar os divisores: ");
        scanf("%d", &n);

        if (n < 2) break;

        printf("\nOs divisores de %d são: \n", n);

        for(i = 1; i != n; i++){
            if ((n % i) == 0) printf("\n%d", i);
        }
    
    }

    printf("\nPrograma Encerrado\n");
    return 0;
}