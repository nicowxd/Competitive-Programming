// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Números de Ahmoc
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2049

#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000010

char T[MAXN], P[MAXN];
int b[MAXN];

void kmpPreprocess(int m) 
{ 
	int i = 0, j = -1; b[0] = -1; 
  	while (i < m)
  	{ 
    		while (j >= 0 && P[i] != P[j]) 
    			j = b[j]; 
    		i++; j++; 
    		b[i] = j; 
  	} 
}           

bool kmpSearch(int n, int m) 
{
	int i = 0, j = 0;
	while (i < n) 
  	{ 
  		while (j >= 0 && T[i] != P[j]) 
    			j = b[j]; 
    		i++; j++; 
    		if (j == m) 
    		{ 
			return true;
      			j = b[j]; 
    		}		 
  	} 

	return false;
}

int main()
{

	int n, m, caso = 1;
	
	while(scanf("%s", P) and strcmp(P, "0") != 0)
	{

		if (caso > 1)
			printf("\n");
		scanf("%s", T);

		n = (int) strlen(T);
		m = (int) strlen(P);

		kmpPreprocess(m);
		
		printf("Instancia %d\n", caso++);
		
		if (kmpSearch(n, m))
			printf("verdadeira\n");
		else
			printf("falsa\n");

	}
	return 0;
}
