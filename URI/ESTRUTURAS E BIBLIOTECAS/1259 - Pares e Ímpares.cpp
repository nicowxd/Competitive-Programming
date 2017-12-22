// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pares e Ímpares
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1259

#include <bits/stdc++.h>

using namespace std;

bool cmpGreater (int a, int b)
{
	if (a != b)
		return a > b;
}
bool cmpLess (int a, int b)
{
	if (a != b)
		return a < b;
}

int main()
{
	int n, val, qtypar = 0, qtyimp = 0;
	scanf("%d", &n);
	int vetpar[n], vetimpar[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &val);
		if (val % 2)
		{
			vetimpar[qtyimp] = val;
			qtyimp++;
		}
		else
		{
			vetpar[qtypar] = val;
			qtypar++;
		}
	}
	sort(vetimpar, vetimpar+qtyimp, cmpGreater);
	sort(vetpar, vetpar+qtypar, cmpLess);
	for (int i = 0; i < qtypar; i++)
		printf("%d\n", vetpar[i]);
	for (int i = 0; i < qtyimp; i++)
		printf("%d\n", vetimpar[i]);
	return 0;
}
