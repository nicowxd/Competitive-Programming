// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Estágio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2533

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int m;
	while(scanf("%d",&m) != EOF)
	{
		int n, c;
		double num = 0.0, den = 0.0;
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &n, &c);
			num += n * c;
			den += c * 100;	
		}
		printf("%.4lf\n", num/den);
	}
	return 0;
}
