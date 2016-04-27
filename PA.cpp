#include <stdio.h>
#include <conio.h>

main(){
int n,r,pri,soma,i,termo;
printf("\nInforme o numero de termos:");
scanf("%d",&n);
printf("\nInforme a razao:");
scanf("%d",&r);
printf("\nInforme o primeiro termo:");
scanf("%d",&pri);
termo=pri;
soma=0;
for(i=0;i<n;i++){
   //printf("\nTERMO1: %d",termo);
   soma+=termo;
   termo=termo+r;
}
printf("\nA soma da P.A e igual: %d",soma);



getch();
}
