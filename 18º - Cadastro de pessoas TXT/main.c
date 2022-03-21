#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
char cpf[SIZE][50];
int op;
void cadastro();
void lista();
//void pesquisa();

int main(void)
{
    do{
        system("cls");
        printf("\n---- M E N U ----\n1 - Cadastrar\n2 - Listar todos\n3 - Sair\n\n Opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            cadastro();
            break;
        case 2:
            lista();
            break;
        case 3:
            printf("Sistema finalizado!! Cuide-se!!\n");
            system("exit");
            break;
        default:
            printf("Opçao invalida!!");
            getchar();
            getchar();
        }
    }while(op != 3);
    return 0;
}

void cadastro(){
    system("cls");
    static int linha;
    FILE *arq;
    arq = fopen("arq.txt", "a");

    if(arq == NULL){
        printf("Arquivo não encontrado\n");
    }

    printf("---- Cadastre o paciente! ----\n");
    do{
        fprintf(arq,"Nome: ");
        printf("\nNome: ");
        scanf("%s", &nome[linha]);
        fprintf(arq,"%s \n", nome[linha]);
        fprintf(arq,"Email: ");
        printf("\nEmail: ");
        scanf("%s", &email[linha]);
        fprintf(arq,"%s \n", email[linha]);
        fprintf(arq,"CPF: ");
        printf("\nCPF: ");
        scanf("%s", &cpf[linha]);
        fprintf(arq,"%s \n", cpf[linha]);
        fprintf(arq,"-----------------------------------------------------------------------------\n\n");
        printf("\nDigite 1 para continuar a cadastrar ou qualquer numero para finalizar: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
    fclose(arq);
}

void lista(){
    int c = 0;
    char i[SIZE];
    FILE *arq;
    arq = fopen("arq.txt", "r");

    system("cls");
    printf("\n\n---- PESSOAS COM COVID ----\n");
    if(arq == NULL){
        printf("Arquivo nao encontrado\n");
    }
    while(fgets(i, SIZE, arq) != NULL){
            printf("%s", i);
        }
    printf("\nPrecione qualquer tecla para voltar ao menu!!");
    fclose(arq);
    getchar();
    getchar();
}


/*void pesquisa(){
    int cpfPesquisa;
    int i;
    char emailPesquisa[50];
    do{
        printf("\nDigite 1 para pesquisar por CPF ou 2 por email: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\nDigite o CPF: ");
                scanf("%d", &cpfPesquisa);
                for(i=0; i<SIZE; i++){
                    if(cpf[i] == cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }
                break;

            case 2:
                printf("\nDigite o Email: ");
                scanf("%s", &emailPesquisa);
                for(i = 0; i< SIZE; i++){
                        if(strcmp(email[i],emailPesquisa)==0){
                            printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                        }
                    }
                break;
            default:
            printf("\nOpção invalida!!");
            }
        printf("\nDigite 1 para continuar a pesquisar ou qualquer numero para finalizar ");
        scanf("%d", &op);
    }while(op==1);
}*/
