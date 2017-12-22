// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Hello Galaxy
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1515

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{                                   
	int n,anorecebido,tempo,ano,menorano;
	char nome[60],nomeplaneta[60];
	while(scanf("%d", &n) != EOF && n)
	{
	menorano = 100000;
	for(int i = 0; i < n; i++)
	{
	scanf("%s %d %d", nome, &anorecebido,&tempo);
	ano = anorecebido - tempo;
	if ( menorano > ano)
	{
	strcpy(nomeplaneta,nome);
	menorano = ano;
	}
	}
	printf("%s\n", nomeplaneta);
	}
	return 0;
}
	
	
