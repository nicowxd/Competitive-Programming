// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Nove
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2217

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x&1)
			printf("9\n");
		else
			printf("1\n");
	}
	return 0;
}
