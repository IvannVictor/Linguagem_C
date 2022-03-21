#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        int = Valores inteiros
        float = Numeros decimais
        double = Usado para valores dedcimais grande ou pequenos
        char = Armazena apenas um caracter
    */

    int x; // Variavel comum
    float cons; // Constante são variaveis que não altera

    x = 5;
    cons = 3.14;

    printf("O valor da variavel X e: %d \n", x);
    printf("O valor da constante CONS e: %.2f \n\n", cons);

   int i;
   float f;
   double d;
   char c;

   i = 5;
   f = 2.6;
   d = 20000312.6000000014;
   c = 's';

   printf("i: %d \n", i);
   printf("f: %f \n", f);
   printf("d: %f \n", d);
   printf("c: %c \n\n", c);

   // Pode declarar as varias do mesmo tipo juntas
   int n1, n2, n3;

   n1 = 1;
   n2 = 2;
   n3 = 3;

   printf("Valor 1: %d \nValor 2: %d \nValor 3: %d \n\n", n1, n2, n3);

    // Execicio 1
   char nome[40] = "Ivan Victor";
   int idade = 20;
   char sexo = 'M';
   float altura = 1.70;

   printf("Nome: %s \n", nome); // Quando usado cadeia de caracteres usar o relacionamento %s para strings
   printf("Idade: %i \nSexo: %c \nAltura: %.2f \n\n", idade, sexo, altura);

    // Exercicio 2
   int LaranjaMat = 39, LaranjaMar = 5, resultado;
   resultado = LaranjaMar + LaranjaMat;

   printf("A soma da quantidade de laranjas que Matheus e Marcelo tem e de %i \n\n", resultado);
    return 0;
}
