// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: CPF 2
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1786

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string cpf;
	int b1, b2;
	while(cin >> cpf)
	{
		b1 = b2 = 0;
		for (int i = 0; i < 9; i++)
		{
			cout << cpf[i];
			if (i % 3 == 2 && i != 8)
				printf(".");
			b1+= (cpf[i] - '0')*(i + 1);
			b2+= (cpf[i] - '0')*(9 - i);
		}
		printf("-");
		b1 = b1 % 11;
		b2 = b2 % 11;
		if (b1 == 10)
			b1 = 0;
		if (b2 == 10)
			b2 = 0;
		printf("%d%d\n", b1, b2);
	}
	return 0;
}

