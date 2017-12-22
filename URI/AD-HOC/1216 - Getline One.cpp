// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Getline One
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1216

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{                      
	int cont=0, soma=0;            
	double media;
	while(scanf("%*s") != EOF)
	{                         
	  int x=0;
          scanf("%d", &x);
	  cont++;
	  soma+=x;
	}
	cont/=2;
	media = (double)soma/cont;
	printf("%.1f\n", media);
	return 0;
}
