#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200200;

int main()
{

	int n, x, y;
	char letra;
	pair<char, int> lista[MAXN];
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %c %d", &x, &letra, &y);
		lista[x] = make_pair(letra, y);
	}
	
	int next = 0;
	while(next != 1)
	{
		printf("%c", lista[next].first);
		next = lista[next].second;
	}
	printf("\n");
	return 0;
}
