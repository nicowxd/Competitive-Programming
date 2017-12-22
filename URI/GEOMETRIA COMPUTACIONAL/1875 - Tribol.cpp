// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tribol
// Nível: 1
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1875

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string c;
	char a, b;
	scanf("%d", &n);
	while(n--)
	{
		int maior = 0, times[3] = {0};
		int p;
		scanf("%d", &p);
		getchar();
		for (int i = 0; i < p; i++)
		{
			getline(cin, c);
			a = c[0];
			b = c[2];
			if (a == 'R' && b == 'G')
				times[0]+=2;
			else if (a == 'R' && b == 'B')
				times[0]++;
			else if (a == 'G' && b == 'B')
				times[1]+=2;
			else if (a == 'G' && b == 'R')
				times[1]++;
			else if (a == 'B' && b == 'R')
				times[2]+=2;
			else
				times[2]++;
			maior = max(times[0], max(times[1], times[2]));
		}
	
		int ans = 0, time;
		for (int i = 0; i < 3; i++)
		{
			if (times[i] == maior)
			{
				ans++;
				time = i;
			}
		}
		
		if (ans == 3)
			printf("trempate\n");
		else if (ans == 2)
			printf("empate\n");
		else
		{
			if (time == 0)
				printf("red\n");
			else if (time == 1)
				printf("green\n");
			else	
				printf("blue\n");
		}
	}
			return 0;
}
