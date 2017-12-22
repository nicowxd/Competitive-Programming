// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O jogo Matemático de Paula
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1192

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int x, k;
	string math;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		cin >> math;
		if (math[0] == math[2])
		{
			k = (math[0] - '0')*(math[2] - '0');
			printf("%d\n", k);
		}
		else
		{
			if (isupper(math[1]))
			{
					k = (math[2] - '0') - (math[0] - '0');
					printf("%d\n", k);
			}
			else
			{
					k = (math[0] - '0') + (math[2] - '0');
					printf("%d\n", k);
			}
		}
	}
	return 0;
}

					


