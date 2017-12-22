// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Nossos Dias Nunca Voltarão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1864

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{	
	int n;
	char cita[50] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	printf("%c", cita[i]);
	}
	printf("\n");
	return 0;
}
