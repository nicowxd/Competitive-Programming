// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conversa Internacional
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int n,k;
	char idioma[110][22];
	string final;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%d", &k);
	scanf("%s", idioma[0]);
	final = idioma[0];
	for (int j = 1; j < k; j++)
	{
	scanf("%s", &idioma[j]);
	if (strcmp(idioma[j-1],idioma[j]) != 0)
	{
	final = "ingles";
	}	
	}
	cout << final << endl;
	}
	return 0;
}
	
	
