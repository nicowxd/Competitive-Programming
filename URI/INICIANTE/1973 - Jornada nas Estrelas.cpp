// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jornada nas Estrelas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1973

#include <bits/stdc++.h>

using namespace std;

long long int carn[1000010];
set<int> visit;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, cont = 0;
	long long int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &carn[i]);
		sum += carn[i];
	}
	int i = 0;
	while(i >= 0 && i < n)
	{
		visit.insert(i);
		if (carn[i])
		{
			sum--;
			if ((carn[i] % 2))
			{
				carn[i]--;
				i++;
			}
			else
			{
				carn[i]--;
				i--;
			}
				
		}
		else
			i--;
	}

	printf("%d %lld\n", visit.size(), sum);
	return 0;
}





