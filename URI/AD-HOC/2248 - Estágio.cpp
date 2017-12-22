// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Estágio
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2248

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, turma = 1;
	
	while(scanf("%d", &n), n)
	{
		int ans = 0, id, val;
		pair<int, int> al[1010];
		
		printf("Turma %d\n", turma++);

		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &id, &val);
			if (val > ans)
				ans = val;
			al[i].first = id;
			al[i].second = val;
		}
		
		for (int i = 0; i < n; i++)
		{
			if (al[i].second == ans)
				printf("%d ", al[i].first);
		}

		printf("\n\n");
	}

	return 0;
}
