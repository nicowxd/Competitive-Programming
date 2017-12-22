// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Oráculo de Alexandria
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1457

#include <bits/stdc++.h>

using namespace std;

long long int oraculo(long long int a, long long int b)
{
	long long int acc = 1;
	for (int i = 0; a-(i*b) >= 1; i++)
	{
		acc*= a-(i*b);
	}
	return acc;
}

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		string inst;
		cin >> inst;
		long long int exc = 0, num = 0;
		for (int i = 0; i < (int) inst.size(); i++)
		{
			if (isdigit(inst[i]))
				num++;
			else
				exc++;
		}
		long long int valor = 0;
		for (int i = 0; i < num; i++)
		{
			valor+= (inst[i]-'0') * pow(10, (num-i-1));
		}
		printf("%lld\n", oraculo(valor, exc));
	}
	return 0;
}
			
