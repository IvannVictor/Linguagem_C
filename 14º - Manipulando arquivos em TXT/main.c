#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("teste.txt", "w"); // Caminhos de diretorio em C usamos //
    fprintf(file,"Com o fprint ele escreve no arquivo\n");
    fprintf(file,"testando se vai entrar outra linha ou apagar a mensagem da primeira");
    fclose(file);
    return 0;
}
