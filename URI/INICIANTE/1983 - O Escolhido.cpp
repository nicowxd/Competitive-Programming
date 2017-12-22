// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Escolhido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1983

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, mat[110], result;
	double nota[110], maior = -1;	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%d %lf", &mat[i], &nota[i]);
	if (maior < nota[i])
	{
		maior = nota[i];
		result = i;
	}
	}
	if (maior >= 8)
		printf("%d\n", mat[result]);
	else
		printf("Minimum note not reached\n");
	return 0;
}
	

