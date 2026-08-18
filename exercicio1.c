#include <stdio.h>

int main(void){

    printf("Exercício 1\n");

    int n = 0, proximo, contador, anterior;
    printf("Digite o valor de n:\n");

    while(n >= 0){
        scanf("%d", &n);
        if((n <= 0)) break;
        proximo = 0;
        contador = 0;
        scanf("%d", &anterior);
        for(int i = 1; i != n; i++){
            scanf("%d", &proximo);
            if (anterior >= proximo) contador++;
            anterior = proximo;
        }

        printf("Essa sequência deixou de ser estritamente crescente %d vezes\n", contador);

    }
   
    return 0;

}
