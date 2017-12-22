// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Praça de Alimentação
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1440

#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	int n;

	while (scanf ("%d", &n), n)
	{
	vector < pair <int, char> > events;

	int e = n/2;
	int x = e;

	for (int i = 0; i < n; i++)
	{
		int hh, mm, ss;
		char t;

		scanf ("%d:%d:%d %c%*c", &hh, &mm, &ss, &t);

		events.push_back(make_pair(ss+mm*60+hh*60*60, t));

		if (t=='E')
			e--;

		//cout << e << endl;
	}

	sort (events.begin(), events.end());
	int cnt = 0;
	int mcnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (events[i].second == 'E')
			cnt++;
		else if (events[i].second == '?' and e)
			cnt++, e--;
		else
		{
			mcnt = max (mcnt, cnt);
			cnt--;
		}
	}

	cout << mcnt << endl;
	}

	return 0;
}

