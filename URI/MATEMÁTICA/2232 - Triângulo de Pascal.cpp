// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulo de Pascal
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2232

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	scanf("%d", &n);
	
	while(n--)
	{
		int t;
		scanf("%d", &t);
		
		int ans = pow(2, t-1) + pow(2, t-1)-1;
		printf("%d\n", ans);
	}
	return 0;
}
