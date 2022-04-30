#define TAM_MAX 5
#define ZERADA -1

typedef struct pilha
{
    int pilha[TAM_MAX];
    int topo;
} PILHA;

int pilhaCheia (PILHA p);
int pilhaVazia(PILHA p);

void inicializaPilha(PILHA *p);
int  empilha(PILHA *p, int n);
int  desempilha(PILHA *p, int *n);
int  elementoDoTopo(PILHA p);
