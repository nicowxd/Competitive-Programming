// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz Quadrada I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1435

#include <stdio.h>
#include<stdlib.h>
int main(){
   int a, i, j;
   
   while(scanf("%d", &a), a!=0){
      int mat[a][a], p=1, c=0, k, f=a;
      
      k=0; while(k<a){
         i=c; while(i<f){
            j=c; while(j<f){
               mat[i][j]=p;
            j++;}
         i++;}
      p++;
      c++;
      f--;
      k++;}
      
      i=0; while(i<a){
         j=0; while(j<a){
            printf("%3d", mat[i][j]);
			if (j<(a-1))
				printf(" ");
			j++;}
         printf("\n");
      i++;}
    printf("\n")  ;
   }
system("pause");
}

