// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Efílogo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1845

#include <bits/stdc++.h>

using namespace std;

char efi[17] = {'b', 'f', 'j', 'p', 's', 'v', 'x', 'z', 'B', 'F', 'J', 'P', 'S', 'V', 'X', 'Z'};

bool isEfi(char x)
{
	bool ans = false;
	for (int i = 0; i < 17; i++)
	{
		if (x == efi[i])
			ans = true;
	}

	return ans;
}

int main()
{

	char x;
	bool status = false;
	while(scanf("%c", &x) != EOF)
	{
		if (isEfi(x))
		{
			if (!status)
			{
				if (isupper(x))
					printf("F");
				else
					printf("f");
				status = true;
			}
			else
				continue;
		}
		else
		{
			printf("%c", x);
			status = false;
		}
	}
	return 0;
}
