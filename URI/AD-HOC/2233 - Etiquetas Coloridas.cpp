// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Etiquetas Coloridas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2233

#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int r,g,b;
	
	scanf("%llx %llx %llx", &r, &g, &b);
	
	long long int k1 = (r/g)*(r/g);
	long long int k2 = (g/b)*(g/b) + 1;
	long long int ans = k1*k2 + 1;
	
	printf("%llx\n", ans);

	return 0;
}
