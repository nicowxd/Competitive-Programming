#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int c;
	string first, second, word;
	scanf("%d ", &c);

	while(c--)
	{	
		vector<int> v;

		cin >> first >> second >> word;
		
		for (int i = 0; i < (int) word.size(); i++)
		{
			if (word[i] == '_')
				v.push_back(i);
		}
		
		bool ok = false;

		for (int i = 0; i < (int) v.size(); i++)
		{
			for (int j = 0; j < (int) v.size(); j++)
			{
				if (i == j)
					continue;
				if (first[v[i]] == second[v[j]])
					ok = true;
			}
		}

		puts(ok ? "Y" : "N");
	}


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
