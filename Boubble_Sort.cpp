#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num 10000
main(){
    int k,i,j,n,vet[num],aux,cont1,cont2,aux2;
    srand(time(NULL));
    //GERANDO OS NUMEROS ALEATORIOS

    for(k=0; k<1000; k++){
        for(i=0;i<num;i++){
           vet[i]=rand()%50;
        }

        //GERANDO ENTRADA ORDENADA
       /* for(i=0;i<num;i++){
           vet[i]=i;
        }*/
        // GERANDO ENTRADA INVERTIDA
       /* aux2=num;
        for(i=0;i<num;i++){
           vet[i]=aux2;
           aux2--;
        }*/
        cont1=0;
        cont2=0;
        for(i=0;i<num;i++){
           for(j=0;j<num-1;j++){
             cont1++;
             if (vet[j]>vet[j+1]){
               aux=vet[j];
               vet[j]=vet[j+1];
               vet[j+1]=aux;
               cont2++;
               }
           }
        }
        //printf("\n%d", cont1); //COMPARAÇOES
        printf("\n%d",cont2);//TROCAS
    }
    getch();
}
