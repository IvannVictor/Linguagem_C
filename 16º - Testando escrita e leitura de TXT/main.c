#include <stdio.h>
#include <stdlib.h>

int main()
{
    char teste[1000];

    // Criando o arquivo e escrevendo nele.
    FILE *arq;
    arq = fopen("arq.txt", "w");
    printf("Escreva alguma coisa: ");
    scanf("%s", &teste);
    fprintf(arq,"%s \n", teste);
    printf("Dados gravados com sucesso\n\n");
    fclose(arq);

    //Fazendo a leitura.
    arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Arquivo não encontrado\n");
    }

    char teste2[1000];
    while(fgets(teste2, 1000, arq) != NULL){
        printf("%s", teste2);
    }

    // Validando os dados do arquivo.
    if(strcmp(teste2, "testando")){
        printf("Funcionou\n");
    }
    fclose(arq);

    return 0;
}
