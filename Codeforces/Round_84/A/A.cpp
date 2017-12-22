#include <bits/stdc++.h>

using namespace std;

bool correct(int x)
{
	int aux;
	bool flag = true;
	while(x and flag)
	{
		aux = x % 10;
		if (aux != 4 && aux != 7)
			flag = false;
		x/=10;
	}
	if (flag)
		return true;
	else
		return false;
}

int main()
{

	string num;
	cin >> num;
	
	int lck = 0;
	
	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] == '4' || num[i] == '7')
			lck++;
	}
	
	if (correct(lck))
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
