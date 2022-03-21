#include <stdio.h>
#include <stdlib.h>

int main()
{

    int var;
    while(var != 1234){
        printf("Digite a sua senha: ");
        scanf("%d", &var);
        if(var != 1234){
            printf("SENHA INVALIDA! Por favor digite novamente\n");
        }
    }
    printf("Ola, mundo!");
    return 0;
}
