// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Presentes Grandes
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2720

#include <bits/stdc++.h>

using namespace std;

struct pr {
	
	int id;
	int vol;
};

bool cmp(pr a, pr b)
{
	if (a.vol != b.vol)
		return a.vol > b.vol;
	return a.id < b.id;
}

int main()
{

	pr papa[100010];
	int t;
	
	scanf("%d", &t);

	while(t--)
	{
		int n, k, id, al, lar, cm;
		scanf("%d %d", &n, &k);

		for (int i = 0; i < n; i++)
		{
			scanf("%d %d %d %d", &id, &al, &lar, &cm);
			papa[i].id = id;
			papa[i].vol = al*lar*cm;
		}

		sort(papa, papa+n, cmp);
	
		int val[100010];
		val[0] = papa[0].id;
		
		for (int i = 1; i < k; i++)
			val[i] = papa[i].id;
		
		sort(val, val+k);
		printf("%d", val[0]);
		for (int i = 1; i < k; i++)
			printf(" %d", val[i]);
		printf("\n");
	}

	return 0;
}
