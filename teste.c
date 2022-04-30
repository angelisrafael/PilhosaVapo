#include <stdio.h>
#include <stdlib.h>
#include "main.c"

PILHA pilha;
int n;

int menu();
void option(int op);
void verPilha(PILHA p);
void list_Stack(PILHA* p);


int main()
{
    int op;

    printf("--------------------------\n");
    printf("---------MENU PILHA-------\n");
    printf("--------------------------\n");
    
    do
    {
        op = menu();
        option(op);
    } while(op != 7);

    return 0;
}

int menu()
{
    int op;

    printf("Selecione uma opcao:\n");
    printf("1 - CRIAR PILHA: \n");
    printf("2 - INSERIR NA PILHA: \n");
    printf("3 - REMOVER DA PILHA: \n");
    printf("4 - MOSTRAR ELEMENTO DO TOPO: \n");
    printf("5 - MOSTRAR PILHA: \n");
    printf("6 - LISTAR PILHA: \n");
    printf("7 - SAIR\n");
    printf(">>>>");
    
    scanf("%d", &op);
    return op;
}

void option(int op)
{
    switch (op)
    {
        case 1:
            inicializaPilha(&pilha);
            printf("Pilha Inicializada\n");
            break;
        
        case 2:
            if (pilhaCheia(pilha))
                printf("Erro: Pilha Cheia \n");
            else
            {
                printf("Digite um número:");
                scanf("%d", &n);
                empilha(&pilha, n);
                printf("\nInserido ...\n");
            }
            break;
        
        case 3:
            if (pilhaVazia(pilha))
                printf("Error: Pilha Vazia\n");
            else
            {
                desempilha(&pilha, &n);
                printf("Topo Removido\n");
            }
            break;
    
        case 4:
            if (pilhaVazia(pilha))
                printf("Error: Pilha Vazia\n");
            else
                printf("Topo: %d\n", elementoDoTopo(pilha));

            break;
        
        case 5:
           if (pilhaVazia(pilha))
                printf("Error: Pilha Vazia\n");
            else
                verPilha(pilha);
           
            break;

        case 6:
            if (pilhaVazia(pilha))
                printf("Error: Pilha Vazia\n");
            else
                list_Stack(&pilha); 
                
            break;

        case 7:
            break;
    }    
}

void verPilha(PILHA p)
{          
    for (int i = p.topo; i > -1; i--)
        printf("\t|%d|\n", p.pilha[i]);
    
    printf("\t^^^^\n\n");
    printf("pressione qualquer tecla...");
    getchar();        
    getchar();
 }

void list_Stack(PILHA* p)
{
    int tam = p->topo + 1;
    PILHA aux;
    inicializaPilha(&aux);           
    for (int i = 0; i < tam; i++)
    {    
        desempilha(p, &n);     
        empilha(&aux, n);            
    }

    for (int i = 0; i < tam; i++)
    {
        desempilha(&aux, &n);
        printf("%d ", n);
        empilha(p, n);
    }     
    printf("pressione qualquer tecla...");
    getchar();        
    getchar();
}