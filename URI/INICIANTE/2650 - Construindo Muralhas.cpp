// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Construindo Muralhas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2650

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, w;
	string nome;
	scanf("%d %d%*c", &n, &w);

	for (int i = 0; i < n; i++)
	{
		getline(cin, nome);
		
		int x = 0, m = 1, tam = (int) nome.size() - 1;
		for (tam; isdigit(nome[tam]); tam--)
		{
			x += (nome[tam] - '0')*m;
			m*= 10;
		}
		
		if (x > w)
		{
			for (int j = 0; j < tam; j++)
				printf("%c", nome[j]);
			printf("\n");
		}
	}

	return 0;
}
