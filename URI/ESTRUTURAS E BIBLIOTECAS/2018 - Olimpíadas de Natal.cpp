#include <bits/stdc++.h>

using namespace std;

struct pais {
	string nome;
	int ouro;
	int prata;
	int bronze;
};

bool cmp(pais a, pais b)
{
	if (a.ouro != b.ouro)
		return a.ouro > b.ouro;
	else if (a.prata != b.prata)
		return a.prata > b.prata;
	else if (a.bronze != b.bronze)
		return a.bronze > b.bronze;
	return a.nome < b.nome;
}

int main()
{
	
	map<string, pair<int, pair<int, int> > > m;
	string n, f, s, t;	
	
	while(getline(cin, n))
	{
		getline(cin, f);
		getline(cin, s);
		getline(cin, t);
		
		m[f].first++;
		m[s].second.first++;
		m[t].second.second++;
	}
	
	int i = 0;
	pais p[400];
	pair<int, pair<int, int> > v;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		v = it->second;
		p[i].nome = it->first;
		p[i].ouro = v.first;
		p[i].prata = v.second.first;
		p[i].bronze = v.second.second;
		i++;
	}

	sort(p, p + i, cmp);
	
	puts("Quadro de Medalhas");
	for (int j = 0; j < i; j++)
		printf("%s %d %d %d\n", p[j].nome.c_str(), p[j].ouro, p[j].prata, p[j].bronze);
	
	return 0;
}
