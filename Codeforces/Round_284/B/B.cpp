#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, m;
	string first, second;
	map<string, string> notes;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		cin >> first >> second;
		notes[first] = second;
	}	
	for (int i = 0; i < n; i++)
	{
		cin >> first;
		if (notes[first].size() < first.size())
			cout << notes[first] << ' ';
		else
			cout << first << ' ';
	}
	printf("\n");	
	return 0;
}
