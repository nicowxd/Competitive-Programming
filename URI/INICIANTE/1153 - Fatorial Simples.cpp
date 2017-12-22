// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fatorial Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1153

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    unsigned long int n,fat;
    scanf("%d", &n);
    fat = n;
    for (n-1;n>1;n--)
    {
        fat*=(n-1);
    }
    printf("%d\n", fat);
    return 0;
}

