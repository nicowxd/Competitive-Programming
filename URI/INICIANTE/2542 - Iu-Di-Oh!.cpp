// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Iu-Di-Oh!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2542

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c1[110][110], c2[110][110];
	
	while(scanf("%d", &n) != EOF)
	{
		memset(c1, 0, sizeof(c1));
		memset(c2, 0, sizeof(c2));
		int m, l;
		scanf("%d %d", &m, &l);
		
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &c1[i][j]);
		
		for (int i = 0; i < l; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &c2[i][j]);
		
		int cm, cl, a;
		scanf("%d %d", &cm, &cl);
		scanf("%d", &a);
		
		if (c1[cm-1][a-1] > c2[cl-1][a-1])
			printf("Marcos\n");
		else if (c1[cm-1][a-1] < c2[cl-1][a-1])
			printf("Leonardo\n");
		else
			printf("Empate\n");
	}
	return 0;
}
