// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fórmula 1
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1125

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct {
	int id;
	int pnt;
	int pos[110];
} pil;

bool cmp(pil a, pil b)
{
	if (a.pnt != b.pnt)
		return a.pnt > b.pnt;
	return a.id < b.id;
}

int main()
{
	int g, p;
	while((cin >> g >> p), g || p)
	{
		pil pilotos[101];
		int x;
		
		for (int i = 1; i <= p; i++)
		{
			pilotos[i].id = i;
			pilotos[i].pnt = 0;
			memset(pilotos[i].pos, 0, sizeof pilotos[i].pos);
		}
		
		for (int i = 1; i <= g; i++)
		{
			for (int j = 1; j <= p; j++)
			{
				cin >> x;
				pilotos[j].pos[x]++;
			}
		}
		
		cin >> x;
		for (int i = 1; i <= x; i++)
		{
			int k;
			cin >> k;
			for (int j = 1; j <= k; j++)
			{
				int l;
				cin >> l;

				for (int m = 1; m <= p; m++)
					pilotos[m].pnt += pilotos[m].pos[j]*l;
			}
			
			sort(pilotos+1, pilotos+1+p, cmp);
			cout << pilotos[1].id;

			int m = pilotos[1].pnt;

			for (int i = 2; i <= p; i++)
			{
				if (pilotos[i].pnt == m)
					cout << " " << pilotos[i].id;
			}

			cout << "\n";
			
			for (int i = 1; i <= p; i++)
				pilotos[i].pnt = 0;
		}
	}
	return 0;
}
