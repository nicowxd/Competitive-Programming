// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Variações
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1632

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string pass;
	scanf("%d", &n);
	
	while(n--)
	{
		getchar();
		cin >> pass;
		
		int ans = 1;
		for (int i = 0; i < pass.size(); i++)
		{	
			if (pass[i] == 'A' or pass[i] == 'a' or pass[i] == 'E' or pass[i] == 'e' or pass[i] == 'I' or pass[i] == 'i' or pass[i] == 'O' or pass[i] == 'o'or pass[i] == 'S' or pass[i] == 's')
				ans *= 3;
			else
				ans *= 2;
		}
		
		printf("%d\n", ans);
	}
			
	return 0;
}
