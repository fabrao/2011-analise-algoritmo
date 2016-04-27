#include <stdlib.h>
#include <stdio.h>

#define TAMANHO_VETOR 1000
#define REPETE 100

void troca();
int pivo_divide();
void quickSort();
void Aleatorio();
void Ordenado();
void Inverso();

int num_trocas= 0;
int num_compatacoes= 0;
int vetor[TAMANHO_VETOR];


int main(){

    int i = 0;
    srand(time(NULL));

    for(i=0; i< REPETE; i++){
        Aleatorio(vetor);
        //Ordenado(vetor);
        //Inverso(vetor);


        /*printf("\nVetor original:\n{");
        for(i= 0 ; i<TAMANHO_VETOR ; i++) {
            printf("%d", vetor[i]);
            if(i <TAMANHO_VETOR-1) printf(", ");
        }
        printf("}\n");*/


        // algoritmo da listagem 2
        quickSort(vetor, 0, TAMANHO_VETOR - 1);

       /* printf("\nVetor ordenado:\n{");
        for(i= 0 ; i<TAMANHO_VETOR ; i++) {
            printf("%d", vetor[i]);
            if(i <TAMANHO_VETOR-1) printf(", ");
        }*/

        //printf("}\n\n");
        printf("%d\n", num_trocas); //TROCAS
       // printf("%d\n", num_compatacoes); //COMPARAÇOES
        num_trocas = 0;
        num_compatacoes = 0;
    }
    return 0;
}



void Aleatorio(int vet[]){
    int i = 0;
    for(i= 0 ; i<TAMANHO_VETOR ; i++) {

        // gera numeros entre 0 e 99999
        vet[i]= rand()%1000*rand()%1000;
    }
}


void Ordenado(int vet[]){
    int i = 0;
    for(i= 0 ; i<TAMANHO_VETOR ; i++) {
        vet[i]= i;
    }
}


void Inverso(int vet[]){
    int i = 0;
    for(i= 0 ; i<TAMANHO_VETOR ; i++) {
        vet[i]= TAMANHO_VETOR - i;
    }
}


void troca(int* a, int* b){
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
    num_trocas++;
}


int pivo_divide(int vet[], int esquerda, int direita){

    int i, j;
    i = esquerda;

    for (j = esquerda + 1; j <= direita; ++j) {
        num_compatacoes++;
        if (vet[j] < vet[esquerda]) {
            ++i;

            troca(&vet[i], &vet[j]);
        }
    }

    troca(&vet[esquerda], &vet[i]);
    return i;
}


void quickSort(int vet[], int esquerda, int direita){

    int r;
    if (direita > esquerda) {
        r = pivo_divide(vet, esquerda, direita);
        quickSort(vet, esquerda, r - 1);
        quickSort(vet, r + 1, direita);
    }
}
