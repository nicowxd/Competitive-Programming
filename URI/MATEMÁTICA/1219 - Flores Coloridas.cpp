// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Flores Coloridas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1219

#include <iostream>
#include <cstdio>
#include <cmath>

#define pi 3.1415926535897

using namespace std;

int main()
{
	int a,b,c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		double perimetro = (a+b+c)/2.0;
		double areaTriangulo = sqrt(perimetro*(perimetro-a)*(perimetro-b)*(perimetro-c));
		double raioCirc_Ros = (areaTriangulo/perimetro);
		double areaCirc_Ros = pi*raioCirc_Ros*raioCirc_Ros;
		double raioCirc_Gir = (a*b*c)/(4*areaTriangulo);
		double areaCirc_Gir = pi*raioCirc_Gir*raioCirc_Gir;
		double violetas = areaTriangulo - areaCirc_Ros;
		double girassois = areaCirc_Gir - areaTriangulo;
		double rosas = areaCirc_Ros;
		printf("%.4f %.4f %.4f\n", girassois, violetas, rosas);
	}
	return 0;
}




