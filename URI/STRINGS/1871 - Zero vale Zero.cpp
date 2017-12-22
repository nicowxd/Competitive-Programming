// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Zero vale Zero
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1871

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	char number[20];
	while(scanf("%d %d", &n, &m), n || m)
	{
		int sum = n+m;
		sprintf(number, "%d", sum);
		for (int i = 0; number[i] != '\0'; i++)
		{
			if (number[i] != '0')
				printf("%c", number[i]);
		}
		printf("\n");
	}
	return 0;
}
