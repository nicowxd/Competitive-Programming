// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Elevador
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2378

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c, s, e, ac = 0;
	bool exc = false;
	scanf("%d %d", &n, &c);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &s, &e);
		ac -= s;
		ac+= e;
		if (ac > c)
			exc = true;
	}
	
	if (exc)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
