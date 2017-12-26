#include <bits/stdc++.h>

using namespace std;

struct jogador {
	
	int id;
	int p;
};

bool cmp (jogador a, jogador b)
{
	if (a.p != b.p)
		return a.p > b.p;
	return a.id < b.id;
}

int main()
{

	int n, m;
	
	while(scanf("%d %d", &n, &m) && (n or m))
	{
		map<int, int> mapa;
	
		for (int i = 0, x; i < n*m; i++)
		{
			scanf("%d", &x);
			mapa[x]++;
		}
		
		int i = 0;
		jogador jog[251000];
		for (auto it = mapa.begin(); it != mapa.end(); it++)
		{
			jog[i].id = it->first;
			jog[i].p = it->second;
			i++;
		}
		
		sort(jog, jog + i, cmp);
		
		int ac = jog[1].p;
		i = 1;
		
		while(jog[i].p == ac)
		{
			printf("%d ", jog[i].id);
			i++;
		}
		printf("\n");
	}

	return 0;
}
