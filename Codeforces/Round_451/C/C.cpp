#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d ", &n);

	vector<string> s[100];
	map<string, int> m;

	for (int i = 0; i < n; i++)
	{	
		int k;
		string name, aux;

		cin >> name >> k;
		
		if (m.find(name) == m.end())
			m[name] = i;
		for (int j = 0; j < k; j++)
		{
			cin >> aux;
			s[m[name]].push_back(aux);
		}
	}

	return 0;
}
