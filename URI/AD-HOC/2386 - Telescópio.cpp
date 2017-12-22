// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Telescópio
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2386

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, n, x, ans = 0;
	scanf("%d", &a);
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{	
		scanf("%d", &x);
		if (x * a >= 40000000)
			ans++;
	}
	
	printf("%d\n", ans);
	return 0;
}
