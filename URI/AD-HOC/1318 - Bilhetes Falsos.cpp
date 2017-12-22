// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bilhetes Falsos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1318

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	map<int, int> bil;
	int x, y, t, result;
	while(scanf("%d %d", &x, &y), (x || y))
	{
		bil.clear();
		result = 0;
		for (int i = 1; i <= x; i++)
		{
			bil[i] = 1;
		}
		for (int i = 1; i <= y; i++)
		{
			scanf("%d", &t);
			if ((bil.find(t) != bil.end()))
			{
				if (bil[t] == 0)
				{
					result++;
					bil[t]--;
				}
				else
					bil[t]--;
			}
			else
				result++;
		}
		printf("%d\n", result);
	}
	return 0;
}


		

