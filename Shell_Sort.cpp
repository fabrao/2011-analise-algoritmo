#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define num 1000
main(){
    int k,i,j,n,gap,vet[num],aux,cont1,cont2,aux2;
    srand(time(NULL));

    for(k=0; k<100; k++){

        //GERANDO OS NUMEROS ALEATORIOS
        for(i=0;i<num;i++){
           vet[i]=rand()%50;
        }

        //GERANDO ENTRADA ORDENADA
        /*for(i=0;i<num;i++){
           vet[i]=i;
        }*/

        // GERANDO ENTRADA INVERTIDA
        /*aux2=num;
        for(i=0;i<num;i++){
           vet[i]=aux2;
           aux2--;
        }*/

        cont1=0;
        cont2=0;
        gap=1;
        do{
           gap = 3*gap+1;
        }while (gap < num);
        do{
           cont1++;
           gap /=3;
           for(i=gap; i<num;i++){
              aux = vet[i];
              j = i-gap;
              while (j >=0 && aux <vet[j]){
                 vet[j+gap] = vet[j];
                 j -=gap;
                 cont2++;
                 cont1++;
              }
              vet[j+gap] = aux;
              }
           }while (gap>1);

       // printf("\n%d", cont1);//COMPARAÇOES
        printf("\n%d",cont2);//TROCAS
    }
    getch();

}
