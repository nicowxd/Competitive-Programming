// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Notas da Prova
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2344

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	if (n == 0)
		printf("E\n");
	else if (n >= 1 and n <= 35)
		printf("D\n");
	else if (n >= 36 and n <= 60)
		printf("C\n");
	else if (n >= 61 and n <= 85)
		printf("B\n");
	else
		printf("A\n");

	return 0;
}
