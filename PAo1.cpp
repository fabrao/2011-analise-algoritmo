#include <stdio.h>
#include <conio.h>
main(){
int n,r,pri,soma,i,termo,ultimo;
printf("\nInforme o numero de termos:");
scanf("%d",&n);
printf("\nInforme a razao:");
scanf("%d",&r);
printf("\nInforme o primeiro termo:");
scanf("%d",&pri);
ultimo=pri+r*(n-1);
soma=(n*(pri+ultimo))/2;
printf("\nA soma da P.A e igual: %d",soma);
getch();
}
