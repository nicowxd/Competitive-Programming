// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Horas e Minutos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1300

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		if (!(n % 6))
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
