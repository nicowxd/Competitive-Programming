// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Prefácio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1837

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int q, r;
	q = a/b;
	r = a%b;

	if (r < 0)
	{
		if (a < 0 && b > 0)
		{
			q--;
			r = a - b*q;
		}	
		else if (a < 0 && b < 0 && a > b)
		{
			q++;	
			r = a - b*q;
		}
		else if (a < 0 && b < 0 && b > a)
		{
			q++;
			r = a - b*q;
		}
	}		
	printf("%d %d\n", q, r);
	return 0;
}
