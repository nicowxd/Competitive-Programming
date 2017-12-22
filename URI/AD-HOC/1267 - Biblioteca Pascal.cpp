// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Biblioteca Pascal
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1267

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, d, part, alunos[110];
	while(scanf("%d %d", &n, &d), n || d)
	{
		memset(alunos, 0, sizeof alunos);
		for (int i = 0; i < d; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &part);
				alunos[j]+= part;
			}
		}
		sort(alunos, alunos+n);
		if (alunos[n-1] == d)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
