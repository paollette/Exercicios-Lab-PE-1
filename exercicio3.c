// EXERCÍCIO CONCLUIDO E FUNCIONANDO

#include <stdio.h>

int main(void){

    printf("Exercício 3\n");

    int primeiro, segundo, calculo, n;

    while(1){
        printf("\nDigite a quantidade de termos de fibonacci que gostaria de ver:\n");
        scanf("%d", &n);
        if (n <= 0) break;

        primeiro = 1;
        segundo = 1;
        n = n-2;
        printf("\n%d\n%d", primeiro, segundo);

        while(1){
            if (n <= 0) break;
            calculo = primeiro + segundo;
            printf("\n%d", calculo);
            primeiro = segundo;
            segundo = calculo;
            n--;
        }

    }

    printf("\nPrograma Encerrado\n");
    return 0;
}