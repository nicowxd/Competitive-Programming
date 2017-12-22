// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triangulação de Delaunay
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1620

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    double x,i,l;
    while(scanf("%lf", &l)!= EOF && l)
    {
    i = 2*l-3;
    x = (i - l)/l;
    printf("%.6f\n", x);
    }
    return 0;
}

