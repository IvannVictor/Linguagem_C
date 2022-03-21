#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
char cpf[SIZE][50];
char cidade[SIZE][50];
char bairro[SIZE][50];
char estado[SIZE][50];
char telefone[SIZE][50];
char comor[SIZE][50];
int op;
void cadastro();
void lista();
//void pesquisa();

typedef struct{
    char usuario[30];
    char senha[30];
}pessoa; pessoa p[1];

int main(void)
{
    char usuario[30];
    char senha[30];

    strcpy(p[0].usuario,"ivan");
    strcpy(p[0].senha,"123");
    printf("---- Ben-vindo ao sistema de cadastro das pessoas com Covid-19 ----\n");

    while((strcmp(usuario,p[0].usuario)==1) || (strcmp(senha,p[0].senha)==1)){
        printf("\nUsuario: ");
        scanf("%s", &usuario);
        printf("\nSenha: ");
        scanf("%s", &senha);

        if((strcmp(usuario,p[0].usuario)==0) || (strcmp(senha,p[0].senha)==0)){
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
                return 1;
            default:
                printf("Opçao invalida!!");
                getchar();
                getchar();
            }
        }while(op != 3);
        }else{
            printf("\nUsuario ou senha invalidos!!");
        }
        }

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
        getchar();
        fprintf(arq,"Nome: ");
        printf("\nNome: ");
        gets(nome[linha]);
        fprintf(arq,"%s \n", nome[linha]);

        fprintf(arq,"Email: ");
        printf("\nEmail: ");
        gets(email[linha]);
        fprintf(arq,"%s \n", email[linha]);

        fprintf(arq,"CPF: ");
        printf("\nCPF: ");
        gets(cpf[linha]);
        fprintf(arq,"%s \n", cpf[linha]);

        fprintf(arq,"Estado: ");
        printf("\nEstado: ");
        gets(estado[linha]);
        fprintf(arq,"%s \n", estado[linha]);

        fprintf(arq,"Cidade: ");
        printf("\ncidade: ");
        gets(cidade[linha]);
        fprintf(arq,"%s \n", cidade[linha]);

        fprintf(arq,"Bairro: ");
        printf("\nBairro: ");
        gets(bairro[linha]);
        fprintf(arq,"%s \n", bairro[linha]);

        fprintf(arq,"Telefone: ");
        printf("\nTelefone: ");
        gets(telefone[linha]);
        fprintf(arq,"%s \n", telefone[linha]);

        fprintf(arq,"Comorbidade: ");
        printf("\nComorbidade: ");
        gets(comor[linha]);
        fprintf(arq,"%s \n", comor[linha]);

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
    printf("\nPrecione enter para voltar ao menu!!");
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
