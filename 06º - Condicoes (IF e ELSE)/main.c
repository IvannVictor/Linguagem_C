#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Teste de condicoes (Teste 06)");
    printf("Digite um valor para a variavel A: ");
    scanf("%i", &a);

    printf("Digite um valor para a variavel B: ");
    scanf("%i", &b);


    if(a < b){
        printf("O valor da variavel A %i e menor que o  da variavel B %i \n\n", a, b);
    }
    else if(a == b){
        printf("O valor da variavel A %i e igual a variavel B %i \n\n", a, b);
    }
    else{
        printf("O valor da variavel B %i e menor que o  da variavel A %i \n\n", b, a);
    }
    return 0;
}
