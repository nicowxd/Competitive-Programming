#include <bits/stdc++.h>

using namespace std;

int main()
{

	string a;
	cin >> a;
	
	int idx;
	bool hasz = false;
	for (int i = 0; i < (int) a.size(); i++)
	{
		if (a[i] == '0' and !hasz)
		{
			idx = i;
			hasz = true;
		}
	}

	if (hasz)
	{
		for (int i = 0; i < (int) a.size(); i++)
		{
			if (idx == i)
				continue;
			printf("%c", a[i]);
		}
	}
	else
	{
		for (int i = 0; i < (int) a.size()-1; i++)
			printf("%c", a[i]);
	}
	printf("\n");


	return 0;
}
