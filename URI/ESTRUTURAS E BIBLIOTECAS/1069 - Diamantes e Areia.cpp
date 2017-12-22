// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Diamantes e Areia
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1069

#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n,cont;
	char dia[1010];
	stack<char> s;
	scanf("%d", &n);
	while(n--)
	{
	cont = 0;
	scanf("%s", dia);
	for (int i = 0; dia[i] != '\0'; i++)
	{
	if (dia[i] == '<')
	{
	s.push(dia[i]);
	}
	if (dia[i] == '>' && !s.empty())
	{
	cont++;
	s.pop();
	}
	}
	while(!s.empty())
	{
	s.pop();
	}
	printf("%d\n", cont);
	}
	return 0;
}
	
	
