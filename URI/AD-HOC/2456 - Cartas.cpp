// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cartas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2456

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n = 5, v[6], x, ans;
	scanf("%d %d", &v[0], &v[1]);
	if (v[0] > v[1])
		x = -1;
	else
		x = 1;
	
	for (int i = 2; i < n; i++)
	{
		scanf("%d", v+i);
		if (v[i-1] > v[i] and x == 1)
			x = 0;
		if (v[i-1] < v[i] and x == -1)
			x = 0;
	}
			
	if (x == 1)
		printf("C\n");
	else if (x == -1)
		printf("D\n");
	else
		printf("N\n");
	return 0;
}
