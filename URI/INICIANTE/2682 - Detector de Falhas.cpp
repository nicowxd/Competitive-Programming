// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Detector de Falhas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2682

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, ans, before = 0;
	bool fine = true;

	while(scanf("%d", &n) != EOF)
	{
		
		if (n > before and fine)
			ans = n + 1;
		else
			fine = false;
		before = n;
	}

	printf("%d\n", ans);

	return 0;
}
