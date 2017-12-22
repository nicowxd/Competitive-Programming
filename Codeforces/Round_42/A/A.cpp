#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	map<string, int> teams;
	
	scanf("%d", &n);
	while(n--)
	{
		string x;
		cin >> x;
		
		if (teams.find(x) == teams.end())
			teams[x] = 1;
		else
			teams[x]++;
	}
	string ans;
	int maior = 0;
	for (map<string, int>::iterator it = teams.begin(); it != teams.end(); it++)
	{
		if ((*it).second > maior)
		{
			maior = (*it).second;
			ans = (*it).first;
		}
	}
	
	cout << ans << "\n";

	return 0;
}
