// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (x > y)
			swap(x,y);
		int sum = 0;
		for (int i = x+1; i < y; i++)
		{
			if (i%2)
				sum+= i;
		}
		printf("%d\n", sum);
	}
	return 0;
}
