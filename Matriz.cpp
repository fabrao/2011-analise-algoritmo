#include <stdio.h>
#include <conio.h>

main(){
int n,i,j,linha,coluna,num,soma;
printf("\nDigite o numero de linhas e colunas da matriz: ");
scanf("%d",&n);
int mat[n][n];

for(i=0;i<n;i++){
   for(j=0;j<n;j++){
     printf("\nDigite um numero: ");
     scanf("%d",&num);
     mat[i][j]=num;
   }       
}
//SOMANDO
soma=0;
//MAIOR CUSTO (n²/2)
for(i=0;i<n;i++){
  j=0;
  while(j<i){
      j=j+1;
  }
  soma=soma+mat[i][j];
}
printf("Soma: %d",soma);   


/*
//MENOR CUSTO (n)
for(i=0;i<n;i++){
soma=soma+mat[i][i];
}

printf("Soma: %d",soma);   
*/



//MOSTRANDO A MATRIZ
for(i=0;i<n;i++){
   for(j=0;j<n;j++){
     printf("\n%d",mat[i][j]);
   }       
}       

getch();
}
