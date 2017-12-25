#include <bits/stdc++.h>

using namespace std;

struct renas {
	
	string nome;
	int peso;
	int idade;
	double al;
};

bool cmp (renas a, renas b)
{
	if (a.peso != b.peso)
		return a.peso > b.peso;
	else if (a.idade != b.idade)
		return a.idade < b.idade;
	else if (a.al != b.al)
		return a.al < b.al;
	return a.nome < b.nome;
}

int main()
{

	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		int n, m, p, ida;
		string s;
		double a;

		renas r[2000];
		scanf("%d %d", &n, &m);
		
		for (int j = 0; j < n; j++)
		{
			cin >> s >> p >> ida >> a;
			r[j].nome = s;
			r[j].peso = p;
			r[j].idade = ida;
			r[j].al = a;
		}

		sort(r, r + n, cmp);

		printf("CENARIO {%d}\n", i);
		for (int j = 0; j < m; j++)
			printf("%d - %s\n", j+1, r[j].nome.c_str());
	}

	return 0;
}
