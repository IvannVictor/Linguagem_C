#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Numeros inteiros, 0,1, -1 ...
    //Marcador de posi��o: %d

    //Numeros Float, 1.1, 0.1 ...
    //Marcado de posi��o: %f

    printf("O numero 2 e inteiro\n");
    printf("O numero %d e um valor inteiro\n", 2);
    printf("O numero %1.1f e um valor float\n\n", 1.2);

    /*
        Operadores aritmeticos basicos

        Soma +
        Subtra��o -
        Multiplica��o *
        Divis�o /

    */
    printf("Operadores aritmeticos basicos\n");
    printf("A soma de 5 + 2 = %d \n", 5 + 2);
    printf("A subtra��o de 5 - 2 = %d", 5 - 2);
    //Para calcular na propria string coloque .
    printf("A divis�o de 5 / 2 = %1.1f", 5 / 2.0);
    printf("A Multiplica��o de 5 * 2 = %d", 5 * 2);
    return 0;
}
