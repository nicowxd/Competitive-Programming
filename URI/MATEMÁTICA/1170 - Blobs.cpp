// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Blobs
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1170

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,dias;
    double comida;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &comida);
        dias = 0;
        for (comida ; comida > 1; comida/=2)
        {
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}

