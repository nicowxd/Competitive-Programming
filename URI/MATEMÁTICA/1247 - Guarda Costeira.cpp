// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guarda Costeira
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1247

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double d, vf, vg, dg, tf, tg;
	while(scanf("%lf %lf %lf", &d, &vf, &vg) != EOF)
	{
	dg = hypot(d, 12);
	tf = 12.0/vf;
	tg = dg/vg;
	if (tg <= tf)
	{
	printf("S\n");                    
	}
	else
	{
	printf("N\n");                    
	}
	}
	return 0;
}
	
	
