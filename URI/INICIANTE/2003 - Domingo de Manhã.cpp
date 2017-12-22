// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Domingo de Manhã
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2003

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h, m, atraso;
	while(scanf("%d:%d", &h, &m) != EOF)
	{
		atraso = h*60 + m + 60;            
		if (atraso > 480)
			printf("Atraso maximo: %d\n", atraso - 480);
		else
			printf("Atraso maximo: 0\n");
	}
	return 0;
}
		
