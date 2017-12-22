// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escultura à Laser
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1107

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int height, ans, lenght, desired[10010];
	while(scanf("%d %d", &height, &lenght), height || lenght)
	{
		ans = 0;
		scanf("%d", &desired[0]);
		ans = height - desired[0];

		for (int i = 1; i < lenght; i++)
		{
			scanf("%d", &desired[i]);
			if (desired[i] != height)
			{
				int tmp = desired[i-1] - desired[i];
				if (tmp > 0)
					ans+= tmp;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
