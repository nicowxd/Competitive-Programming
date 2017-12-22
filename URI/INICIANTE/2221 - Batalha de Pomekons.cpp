// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Batalha de Pomekons
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2221

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		int b;
		scanf("%d", &b);
		
		int ai, di, li, ans1 = 0, ans2 = 0;
		scanf("%d %d %d", &ai, &di, &li);
		
		li%2 ? ans1= (ai+di)/2 : ans1 = ((ai+di)/2) + b;
		
		scanf("%d %d %d", &ai, &di, &li);
		
		li%2 ? ans2 = (ai+di)/2 : ans2 = ((ai+di)/2) + b;

		if (ans1 > ans2)
			printf("Dabriel\n");
		else if (ans1 < ans2)
			printf("Guarte\n");
		else
			printf("Empate\n");
	}
	
	return 0;
}
