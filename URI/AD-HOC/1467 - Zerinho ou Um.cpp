// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Zerinho ou Um
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1467

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if ((a + b + c) % 3 == 0)
			printf("*\n");
		else if (a == b)
			printf("C\n");
		else if (a == c)
			printf("B\n");
		else
			printf("A\n");
	}

	return 0;
}
