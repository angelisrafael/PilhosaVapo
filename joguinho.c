#include <stdio.h>
#include <stdlib.h>
#include "main.c"

PILHA pilha[];

int inicio_jogo();
int qnt, n;

int auxiliar[];

void main(){
    printf("______________________________________________________\n");
    printf("____________________Torre de Hanoi____________________\n");
    printf("______________________________________________________\n\n\n\n\n");

    qnt = inicio_jogo();
    //inicio_jogo();
}
//Parte 1 - Receber o n do usuario;

int inicio_jogo(){
    printf("DIGITE QUANTOS NUMEROS DIFERENTES SERAO DISTRIBUIDOS ENTRE AS PILHAS:\n");
    scanf("%i", &qnt);

    if(qnt < 3 || qnt>5){
        printf("--> TEM QUE SER ENTRE 3 E 5\n\n\n");
        inicio_jogo();
    }
//Total de pilhas do jogo:
    int pilhastotais = qnt + 2;
    printf("%i\n",pilhastotais);

    int i;
//Inicializando as pilhas ainda vazias:
    for (i=0; i<pilhastotais; i++){
        inicializaPilha(&pilha[i]);
        //printf("oi");
    }

//agora tento colocar os valores dentro de um vetor para depois embaralhar e colocar aleeatoriamente nas pilhastotais-2;

    //int n = 0;

    for(int m=-1; m<=qnt; m++){
        for(int x=1; x<=(qnt+1); x++){
            n++;
            auxiliar[n] = x;
            //printf("oi");

            //return x;
            printf("%i\n", auxiliar[n]);
        }
    }

    embaralhar(auxiliar, n);

}

int embaralhar(int *vet, int vetSize)
{
	for (int i = 1; i <= vetSize; i++)
	{
		int r = rand() % vetSize;

		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;

	}
	for (int re = 1; re<= vetSize; re++){
        printf("%i\n", vet[re]);
	}
}



