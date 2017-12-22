// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência S
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1155

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double S=0;
    for (float i = 1; i <= 100; i++)
    {
        S+=(1/i);
    }
    printf("%.2f\n", S);
    return 0;
}

