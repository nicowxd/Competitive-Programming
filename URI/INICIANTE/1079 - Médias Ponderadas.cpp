// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Médias Ponderadas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N;
	float x,y,z,media;
	scanf("%d", &N);
	while(N--)
	{
	scanf("%f %f %f", &x, &y, &z);
	media = (x*2.0+y*3.0+z*5.0)/10.0;
	printf("%.1f\n", media);
	}
	return 0;
}
