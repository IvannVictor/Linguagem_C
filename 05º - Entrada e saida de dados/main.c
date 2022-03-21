#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Uso das funções de entrada
    char nome[20];
    int idade;

    // Entrada do nome
    printf("Bem vindo ao programa de teste numero 05 (Entrada e saida de dados)\n");
    printf("Por favor digite o seu nome: ");
    scanf("%s", &nome); // scanf = usado para entrada de dados um input

    // Entrada da idade
    printf("Digite a sua idade: ");
    scanf("%i", &idade); // Para que apareça no print depois com mais de uma variavel de entrada use o &

    // Saida de dados
    printf("Prazer em conhecer voce %s, entao voce tem %i anos \n\n", nome, idade);
    return 0;
}
