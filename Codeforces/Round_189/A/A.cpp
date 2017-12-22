#include <bits/stdc++.h>

using namespace std;

bool isMagical(string x)
{
	for (int i = 0; i < (int) x.size(); i++)
	{
		if (x[i] != '4' and x[i] != '1')
			return false;
	}
	
	if (x[0] != '1')
		return false;
	
	if (x.find("444") != x.npos)
		return false;
	
	return true;
}

int main()
{

	string x;
	cin >> x;
	
	printf("%s\n", isMagical(x) ? "YES" : "NO");
	return 0;
}
