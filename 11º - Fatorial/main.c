#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fat;
    int resp = 1;
    printf("Digite o valor que voce que saber o fatorial: ");
    scanf("%d", &fat);

    for(;fat >= 1; fat--){
        resp *= fat;
        printf("%d -> ", fat);
        }

    printf("%d", resp);
    return 0;
}
