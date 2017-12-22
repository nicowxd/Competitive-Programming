// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Maior Número de Um Algarismo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1867

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string a, b;
	while(cin >> a >> b)
	{
		if (a == "0" and b == "0")
			break;
		
		int sm1 = 0, sm2 = 0;
		for (int i = 0; i < (int) a.size(); i++)
			sm1 += a[i] - '0';
		for (int i = 0; i < (int) b.size(); i++)
			sm2 += b[i] - '0';
		
		int aux = 0;
		while(sm1 >= 10)
		{
			while(sm1)
			{
				aux += sm1 % 10;
				sm1 /= 10;
			}
			sm1 = aux;
		}
		aux = 0;
		while(sm2 >= 10)
		{
			while(sm2)
			{
				aux += sm2 % 10;
				sm2 /= 10;
			}
			sm2 = aux;	
		}
		
		if (sm1 > sm2)
			printf("1\n");
		else if (sm2 > sm1)
			printf("2\n");
		else
			printf("0\n");
	}

	return 0;
}
