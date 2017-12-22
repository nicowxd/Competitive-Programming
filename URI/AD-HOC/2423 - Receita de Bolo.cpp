// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Receita de Bolo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2423

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int ans = min(a/2, min(b/3, c/5));
	printf("%d\n", ans);
	return 0;
}
