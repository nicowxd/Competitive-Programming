// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escala Musical
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2662

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int scale[12][7] = {{0, 2, 4, 5, 7, 9, 11}, {1, 3, 5, 6, 8, 10, 0}, {2, 4, 6, 7, 9, 11, 1}, {3, 5, 7, 8, 10, 0, 2}, {4, 6, 8, 9, 11, 1, 3}, {5, 7, 9, 10, 0, 2, 4}, {6, 8, 10, 11, 1, 3, 5}, {7, 9, 11, 0, 2, 4, 6}, {8, 10, 0, 1, 3, 5, 7}, {9, 11, 1, 2, 4, 6, 8}, {10, 0, 2, 3, 5, 7, 9}, {11, 1, 3, 4, 6, 8, 10}};

	string mus[12] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
	int n, x;
	set<int> notas;
	set<int>::iterator it;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		notas.insert((x-1)%12);
	}
	
	for (int j = 0; j < 12; j++)
	{
		int ans = 0;
		
		for (int k = 0; k < 7; k++)
		{
			it = notas.find(scale[j][k]);
			if (it != notas.end())
				ans++;
		}
		if (ans == notas.size())
		{
			printf("%s\n", mus[j].c_str());
			return 0;
		}
	}
	printf("desafinado\n");
	return 0;
}
