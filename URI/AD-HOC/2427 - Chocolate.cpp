// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Chocolate
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2427

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int l;
	double x = 0.0;
	scanf("%d", &l);

	while(l >= 2)
	{
		l/=2;
		x++;
	}
	printf("%.0lf\n", pow(4, x));
	return 0;
}
