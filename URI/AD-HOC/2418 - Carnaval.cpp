// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Carnaval
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2418

#include <bits/stdc++.h>

using namespace std;

int main()
{

	double v[6];
	for (int i = 0; i < 5; i++)
		scanf("%lf", v + i);
	
	sort(v, v+5);
	double ans = 0.0;
	for (int i = 1; i < 4; i++)
		ans += v[i];
	
	printf("%.1lf\n", ans);
	return 0;
}
