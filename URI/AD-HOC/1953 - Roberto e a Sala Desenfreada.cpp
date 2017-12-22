// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Roberto e a Sala Desenfreada
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1953

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, epr, ehd, intr, val;
	string crs;
	while(scanf("%d", &n) != EOF)
	{
		
		epr = 0, ehd = 0, intr = 0;
		for (int i = 0; i < n; i++)
		{
		cin >> val >> crs;
		if (crs == "EPR")
			epr++;
		else if (crs == "EHD")
			ehd++;
		else
			intr++;
		}
		printf("EPR: %d\n", epr);
		printf("EHD: %d\n", ehd);
		printf("INTRUSOS: %d\n", intr);
	}
	return 0;
}

