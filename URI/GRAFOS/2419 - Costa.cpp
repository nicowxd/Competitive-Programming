// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Costa
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2419

#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> ii;
int main()
{


	int m, n;
	vector< pair<int, int> > terra;
	cin >> m >> n;
	
	char mapa[m+5][n+5];
	
	for (int i = 0; i <= m+1; i++)
	{
		for (int j = 0; j <= n+1; j++)
		{
			if (i == 0 || i == m+1 || j == 0 || j == n+1)
				mapa[i][j] = '.';
			else
			{
				cin >> mapa[i][j];
				if (mapa[i][j] == '#')
					terra.push_back(ii(i,j));
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < (int) terra.size(); i++)
	{
		ii v = terra[i];
		if (mapa[v.first - 1][v.second] == '.')
			ans++;
		else if (mapa[v.first+1][v.second] == '.')
			ans++;
		else if (mapa[v.first][v.second-1] == '.')
			ans++;
		else if (mapa[v.first][v.second+1] == '.')
			ans++;
		else
			ans = ans + 0;
	}
	cout << ans << "\n";
	return 0;
}

