// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pizza Antes de BH
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2554

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, d, x, dia, mes, ano;
	vector< pair< int, pair<int, int> > > data;
	vector< pair<long long int, int> > idx;
	
	while(scanf("%d %d", &n, &d) != EOF)
	{
		data.clear();
		idx.clear();
		long long int ans = 1e10;
		int a = 0;
		for (int i = 0; i < d; i++)
		{
			int cnt = 0;
			scanf("%d/%d/%d", &dia, &mes, &ano);
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &x);
				cnt += x;
			}
			if (cnt == n)
			{
				long long int k = dia + mes*30 + ano*365;
				data.push_back(make_pair(dia, make_pair(mes, ano)));
				idx.push_back(make_pair(k, a));
				ans = min(ans, k);
				a++;
			}
		}
		
		if (data.size() == 0)
			printf("Pizza antes de FdI\n");
		else
		{
			for (int i = 0; i < (int) idx.size(); i++)
			{
				if (idx[i].first == ans)
					printf("%d/%d/%d\n", data[idx[i].second].first, data[idx[i].second].second.first, data[idx[i].second].second.second);
			}
		}
	}
	return 0;
}
