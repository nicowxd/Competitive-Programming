#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string s1, s2;
	map<string, string> m;
	scanf("%d ", &n);

	while(n--)
	{
		getline(cin, s1);
		getline(cin, s2);
		m[s1] = s2;
	}

	scanf("%d ", &n);
	while(n--)
	{	
		getline(cin, s1);
		cout << m[s1] << endl;
	}

	return 0;
}
