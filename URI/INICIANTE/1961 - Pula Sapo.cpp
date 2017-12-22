// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pula Sapo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1961

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int p, n, c = 1, ans, dif = 0;
	bool flag = true;
	scanf("%d %d", &p, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ans);
		if ((abs(ans-dif) > p) && (c > 1))
		{
			flag = false;
			break;
		}
		dif = ans;
		c++;
	}
	if (flag)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");
	return 0;
}


