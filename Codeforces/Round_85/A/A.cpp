#include <bits/stdc++.h>

using namespace std;

bool comparison(string a, string b)
{
	int tama;
	tama = a.size();
	for (int i = 0; i < tama; i++)
	{
		if (tolower(a[i]) == tolower(b[i]))
			continue;
		else
			return false;
	}
	return true;
}
		
bool maior(string a, string b)
{
	int tam = a.size();
	for (int i = 0 ; i < tam; i++)
	{
		if (tolower(a[i]) == tolower(b[i]))
			continue;
		else
		{
			if (tolower(a[i]) > tolower(b[i]))
				return true;
			else
				return false;
		}
	}
}
		
int main()
{

	string x,y;
	cin >> x >> y;
	if (comparison(x, y))
		printf("0\n");
	else if (maior(x,y))
		printf("1\n");
	else
		printf("-1\n");
	return 0;
}

	
