// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Planejando a Energia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1540

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	while(n--)
	{
		long long int a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		
		double gdiff = d-b;
		int ydiff = c-a;
		
		double ans = (gdiff/ydiff)*100;
		long long int k = (long long int) ans;
		long long int v1 = k % 10;
		k/=10;
		long long int v2 = k % 10;
		ans/=100; 
		printf("%.0lf,%lld%lld\n", trunc(ans), v2, v1);
	}
	return 0;
}
