#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ti;
    do{ // fa�a isso
        printf("Digite a sua senha: ");
        scanf("%d", &ti);
        if(ti != 1234){
            printf("SENHA INVALIDA! Por favor digite novamente\n");
       }
       }while(ti != 1234); // Enquanto isto n�o saciar
    return 0;
}
