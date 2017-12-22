// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Problema com Mediana e Média
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1379

#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int a, b;
	while(scanf("%lld %lld", &a, &b), a || b)
	{
		long long int k = a*3;
			printf("%lld\n", k-a-b);	
	}	 
	return 0;
}
