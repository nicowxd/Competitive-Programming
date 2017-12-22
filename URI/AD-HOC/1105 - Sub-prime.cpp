// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sub-prime
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{                                   
	int b,n,fundo[30];
	while(scanf("%d %d", &b, &n) != EOF && b != 0 && n != 0)
	{
	 for(int i=1; i <= b; i++)
	 {
	  scanf("%d", &fundo[i]);
	 }
	 for(int i=1; i <= n; i++)
	 {
	  int d,c,v;
	  scanf("%d %d %d", &d, &c, &v);
	  fundo[d]-=v;
	  fundo[c]+=v;
	 }
   	 int liquid = 1;
	 for(int i=1; i<= b; i++)
	 {
	  if (fundo[i] < 0)
	  {
          liquid = 0;
	  }
	 }
	 if (liquid)
	 {
	 printf("S\n");
	 }
	 else
	 {
	 printf("N\n");
	 }
	}
	return 0;
}
