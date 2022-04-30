#include <stdio.h>
#include <stdlib.h>
#include "main.c"

PILHA pilha[];

int inicio_jogo();
int qnt;

int guarda;

int auxiliar[];

void main(){
    printf("______________________________________________________\n");
    printf("____________________Torre de Hanoi____________________\n");
    printf("______________________________________________________\n\n\n\n\n");

    qnt = inicio_jogo();
}
//Parte 1 - Receber o n do usuario;

int inicio_jogo(){
    printf("DIGITE QUANTOS NUMEROS DIFERENTES SERAO DISTRIBUIDOS ENTRE AS PILHAS:\n");
    scanf("%i", &qnt);

    if(qnt < 3 || qnt>5){
        printf("--> TEM QUE SER ENTRE 3 E 5\n\n\n");
        inicio_jogo();
    }

    int pilhastotais = qnt + 2;
    printf("%i",pilhastotais);

    int i,j,k;

    for (i=0; i<pilhastotais; i++){
        inicializaPilha(&pilha[i]);
        //printf("oi");
    }
    for (k=0; k<=qnt; k++){
        for (j=1; j<=qnt; j++){
            guarda = j*qnt;
            auxiliar[guarda] = j;
            //printf("%i\n",auxiliar[guarda]);
        }
    }
    printf("%i\n",auxiliar[guarda]);

}

//Parte 2 - Colocar os elementos aleatorios na pilha;



//Parte 3 - Printar pilhas;



//Parte 4 - Trocar os elementos da pilha;



//Parte 5 - Verificar se o jogo terminou;



