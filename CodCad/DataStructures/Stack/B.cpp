#include <bits/stdc++.h>


using namespace std;

int main()
{

	int n;
	string x;
	stack<char> chaves;
	bool ok = true;
	scanf("%d", &n);
	cin.get();

	for (int i = 0; i < n; i++)
	{
		getline(cin, x);
		
		for (int j = 0; j < x.size(); j++)
		{
			if (x[j] == '{')
				chaves.push(x[j]);
			else if (x[j] == '}')
			{
				if (chaves.empty())
					ok = false;
				else
					chaves.pop();
			}
			else
				continue;
			
		}	
	}
	
	if (!chaves.empty())
		ok = false;
	if (ok)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
