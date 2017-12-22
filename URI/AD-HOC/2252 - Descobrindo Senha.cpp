// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Descobrindo Senha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2252

#include <bits/stdc++.h>

using namespace std;

struct pass 
{
	double val;
	int idx;
};

bool cmp (pass a, pass b)
{
	if (fabs(a.val - b.val) > 1e-9)
		return a.val > b.val;
	return a.idx < b.idx;
}

int main()
{

	int n, caso = 1;
	
	while(scanf("%d", &n) != EOF)
	{
		double x;
		pass Pass[11];
		for (int i = 0; i < 10; i++)
		{
			scanf("%lf", &x);
			Pass[i].val = x;
			Pass[i].idx = i;
		}
		
		sort(Pass, Pass + 10, cmp);
		
		printf("Caso %d: ", caso++);
		
		for (int i = 0; i < n; i++)
			printf("%d", Pass[i].idx);

		printf("\n");
	}

	return 0;
}
