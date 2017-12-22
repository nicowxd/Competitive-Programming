// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Par ou Ímpar
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2286

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, c = 1;
	while(scanf("%d", &n), n)
	{
		getchar();
		printf("Teste %d\n", c++);
		
		string a, b;
		cin >> a >> b;
		
		int x, y;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &x, &y);
			if ((x + y) & 1)
				cout << b << endl;
			else
				cout << a << endl;
		}

		printf("\n");
	}
	return 0;
}
