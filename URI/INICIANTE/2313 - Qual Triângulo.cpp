// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Qual Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2313

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, v[3];
	scanf("%d %d %d", &a, &b, &c);
	
	v[0] = a;
	v[1] = b;
	v[2] = c;
	sort(v, v+3);

	if ((a + b > c) and (a + c > b) and (b + c > a))
	{
		printf("Valido-");
		if (a != b and a != c and b != c)
			printf("Escaleno\n");
		else if (a == b and b == c)
			printf("Equilatero\n");
		else
			printf("Isoceles\n");
		
		if (v[2]*v[2] == (v[1]*v[1]) + (v[0]*v[0]))
			printf("Retangulo: S\n");
		else
			printf("Retangulo: N\n");
	}
	else
		printf("Invalido\n");

	return 0;
}
