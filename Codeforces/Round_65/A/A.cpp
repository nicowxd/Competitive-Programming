#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, tam;
	string word;
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		cin >> word;
		tam = word.size();
		if (tam > 10)
			cout << word[0] << tam-2 << word[tam-1];
		else
			cout << word;
		printf("\n");
	}
	return 0;
}
