// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo do Maior
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1397

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{                                   
	int N;
	while(scanf("%d", &N) != EOF && N)
	{
	int A,B,p1=0,p2=0;
	for(int i =0; i<N; i++)
	{
	scanf("%d %d", &A,&B);	
	if (A>B)
	{
	p1++; 
	}
	else if(A<B)
	{
	p2++;
	}
	else
	{
	p1+=0;
	p2+=0;
	}
	}
	printf("%d %d\n", p1, p2);
	}
	return 0;
}
	
