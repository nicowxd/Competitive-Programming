// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: KiloMan
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1250

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int x, k, result, altura[60];
	string seq;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		result = 0;
		scanf("%d", &k);
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &altura[j]);
		}
		cin >> seq;
		for (int j = 0; j < k; j++)
		{
			if (seq[j] == 'J' && (altura[j] > 2))
				result++;
			if (seq[j] == 'S' && (altura[j] <= 2))
				result++;
		}
		printf("%d\n", result);
	}
	return 0;
}




