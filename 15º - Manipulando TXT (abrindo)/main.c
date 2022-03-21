#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("teste.txt", "r");

    if(file == NULL){
        printf("Arquivo não pode ser encontrado!!\n");
        return 0;
    }
    int x,y,z;
    fscanf(file,"%i %i %i", &x, &y, &z);
    printf("%i %i %i", x, y, z);
    fclose(file);
    return 0;
}
