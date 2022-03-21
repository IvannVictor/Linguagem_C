#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;
void cadastro();
void pesquisa();
void lista();

int main(void)
{
    do{
        system("cls");
        printf("\n---- M E N U ----\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair\n\n Opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            cadastro();
            break;
        case 2:
            lista();
            break;
        case 3:
            pesquisa();
            break;
        case 4:
            system("exit");
            break;
        default:
            printf("Opçao invalida!!");
            getchar();
            getchar();
        }
    }while(op != 4);
    return 0;
}

void cadastro(){
    static int linha;
    FILE *arq;
    arq = fopen("arq.txt", "a");

    if(arq == NULL){
        printf("Arquivo não encontrado\n");
    }
    do{
        printf("\nNome: ");
        scanf("%s", &nome[linha]);
        fprintf(arq,"%s \n", nome[linha]);
        printf("\nEmail: ");
        scanf("%s", &email[linha]);
        fprintf(arq,"%s \n", email[linha]);
        printf("\nCPF: ");
        scanf("%d", &cpf[linha]);
        fprintf(arq,"%d \n", cpf[linha]);
        printf("\nDigite 1 para continuar a cadastrar ou qualquer numero para finalizar: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

void pesquisa(){
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
}

void lista(){
    int i;
    for(i = 0; i< SIZE; i++){
        if(cpf[i] > 0){
            printf("\nNome: %s\nEmail: %s\nCPF: %d\n\n", nome[i], email[i], cpf[i]);
        }else{
            break;
        }
    }
    getchar();
    getchar();
}
