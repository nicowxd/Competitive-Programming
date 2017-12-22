// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corrida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2435

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n1, n2, d1, d2, v1, v2;
	double t1, t2;
	scanf("%d %d %d", &n1, &d1, &v1);
	scanf("%d %d %d", &n2, &d2, &v2);
	
	t1 = (d1/(v1/3.6));
	t2 = (d2/(v2/3.6));
	if (t1 < t2)
		printf("%d\n", n1);
	else
		printf("%d\n", n2);

	return 0;
}
