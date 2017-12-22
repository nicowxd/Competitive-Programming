#include <bits/stdc++.h>

using namespace std;

int main()
{
	string x, ans = "";
	int tam;
	cin >> x;
	tam = x.size();
	for (int i = 0; i < tam; i++)
	{
		if (x[i] != '+')
			ans+= x[i];
	}
	
	sort(ans.begin(), ans.end());
	int tam2 = ans.size();
	for (int i = 0; i < tam2; i++)
	{
		printf("%c", ans[i]);
		if (i < tam2 - 1)
			printf("+");
	}
	printf("\n");
	return 0;
}
		
	
