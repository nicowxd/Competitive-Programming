#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	string aux;
	while(scanf("%d ", &n) != EOF)
	{
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			string esp, ra, nome;
			getline(cin, esp);
			getline(cin, ra);
			getline(cin, nome);
			getchar();
			
			if (esp != "cachorro")
				continue;
			else
			{
				int cnt = 0;
				set<char> let;
				let.insert(ra[0]);

				bool found = false;
				
				stringstream ss(nome);
				while (ss >> aux)
				{
					if (let.find(aux[0]) != let.end())
						found = true;
					cnt++;
				}

				if (found and cnt > 1)
					ans++;
			}
		}
		cout << ans << endl;
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
