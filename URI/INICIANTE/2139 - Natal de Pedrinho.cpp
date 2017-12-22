// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Natal de Pedrinho
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2139

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int m, d, cal[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
	while(scanf("%d %d", &m, &d) != EOF)
	{
		if (m == 12 && d == 24)
			printf("E vespera de natal!\n");
		else if (m == 12 && d == 25)
			printf("E natal!\n");
		else if (m == 12 && d > 25)
			printf("Ja passou!\n");
		else
		{
			int sum = cal[m-1] - d;
			for (int i = m; i < 12; i++)
			{
				sum += cal[i];
			}
			printf("Faltam %d dias para o natal!\n", sum);
		}
	}
	return 0;
}
