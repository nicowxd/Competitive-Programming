// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Voleibol
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2310

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, s1 = 0, b1 = 0, a1 = 0;
	double s = 0.0, b = 0.0, a = 0.0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%*s");
		double k, l, m;
		int x, y, z;
		scanf("%lf %lf %lf", &k, &l, &m);
		s += k;
		b += l;
		a += m;
		scanf("%d %d %d", &x, &y, &z);
		s1 += x;
		b1 += y;
		a1 += z;
	}
	printf("Pontos de Saque: %.2lf %%.\n", s1*100/s);
	printf("Pontos de Bloqueio: %.2lf %%.\n", b1*100/b);
	printf("Pontos de Ataque: %.2lf %%.\n", a1*100/a);
	return 0;
}
