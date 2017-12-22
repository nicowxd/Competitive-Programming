// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: HameKameKa
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2591

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string x;
	scanf("%d", &n);
	
	while(n--)
	{
		getchar();
		cin >> x;
		int a = 0, b = 0, i = 1;
		
		while(x[i] == 'a')
		{
			a++;
			i++;
		}
		i = 4+a;
		
		while(x[i] == 'a')
		{
			b++;
			i++;
		}
		
		printf("k");
		for (int i = 0; i < a*b; i++)
			printf("a");
		
		printf("\n");
	}

	
	return 0;
}
