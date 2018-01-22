#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main()
{

	int tab[9][9], caso = 1;
	string h, p;

	while(cin >> h and h != "0")
	{
		int x = h[0] - '1';
		int y = h[1] - 'a';
		
		memset(tab, 0, sizeof tab);
		
		for (int i = 0; i < 8; i++)
		{
			cin >> h;
			tab[h[0] - '1'][h[1] - 'a'] = 1;
		}
		
		int ans = 8;

		for (int i = 0; i < 8; i++)
		{
			int u = x + dx[i], v = y + dy[i];
			int px = u + 1, py1 = v - 1, py2 = v + 1;
			
			if (u < 0 or u >= 8 or v < 0 or v >= 8)
				ans--;
			else if ((px >= 0 and px < 8) and (py1 >= 0 and py1 < 8 and tab[px][py1] == 1) or (py2 >= 0 and py2 < 8 and tab[px][py2] == 1))
				ans--;
		}

		printf("Caso de Teste #%d: %d movimento(s).\n", caso++, ans);
	}	

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
