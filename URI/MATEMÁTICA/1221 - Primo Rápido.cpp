// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Primo Rápido
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1221

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	bool primo;
	scanf("%d", &n);
	while(n--)
	{
		int x;
		primo = true;
		scanf("%d", &x);
		
		if (x == 0 || x == 1)
		{
			printf("Not Prime\n");
			continue;
		}
		for (int i = 2; i <= sqrt(x); i++)
		{
			if (x % i == 0)
				primo = false;
		}
		if (primo)
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}
	return 0;
}
	   
