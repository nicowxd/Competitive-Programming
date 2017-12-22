// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência S II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1156

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double S=1,j=2;
    for (double i = 3; i <= 39; i+=2)
    {
        S+=i/j;
        j*=2;
    }
    printf("%.2f\n", S);
    return 0;
}

