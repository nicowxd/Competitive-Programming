// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Top N
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1943

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int k;
	scanf("%d", &k);
	if (k == 1)
		printf("Top 1\n");
	else if (k > 1 && k <= 3)
		printf("Top 3\n");
	else if (k > 3 && k <= 5)
		printf("Top 5\n");
	else if (k > 5 && k <= 10)
		printf("Top 10\n");
	else if (k > 10 && k <= 25)
		printf("Top 25\n");
	else if (k > 25 && k <= 50)
		printf("Top 50\n");
	else
		printf("Top 100\n");
	return 0;
}

	


