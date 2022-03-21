#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ti;
    do{ // faça isso
        printf("Digite a sua senha: ");
        scanf("%d", &ti);
        if(ti != 1234){
            printf("SENHA INVALIDA! Por favor digite novamente\n");
       }
       }while(ti != 1234); // Enquanto isto não saciar
    return 0;
}
