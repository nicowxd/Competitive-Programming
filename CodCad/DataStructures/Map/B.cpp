#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	map<string, string> v;
	scanf("%d", &t);

	while(t--)
	{
		int m, n;
		string a, b;
		char *p, k[100];
		vector<string> x;
		v.clear();
		scanf("%d %d%*c", &m, &n);
		
		for (int i = 0; i < m; i++)
		{
			getline(cin, a);
			getline(cin, b);
			v[a] = b;
		}
		
		for (int i = 0; i < n; i++)
		{
			gets(k);
			
			for (p = strtok(k, " "); p; p = strtok(NULL, " "))
				x.push_back(p);
		
			for (int j = 0; j < (int) x.size(); j++)
			{
				if (v.find(x[j]) != v.end())
					cout << v[x[j]];
				else
					cout << x[j];

				if (j != (int) x.size() - 1)
					cout << " ";
			}
			x.clear();
			printf("\n");
		}
		
		printf("\n");
	}
		
	return 0;
}
