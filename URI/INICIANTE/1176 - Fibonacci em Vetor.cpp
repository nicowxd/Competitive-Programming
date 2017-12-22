// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fibonacci em Vetor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

void fib (int x)
{
    unsigned long long int vet[x];
    vet[0] = 0;
    vet[1] = 1;
    for (int i = 2; i <= x; i++)
    {
        vet[i] = vet[i-1] + vet[i-2];
    }
    printf("Fib(%d) = %lld\n", x, vet[x]);
}

int main()
{
    int num,val;
    scanf("%d", &num);
    for (int j = 0; j < num; j++)
    {
        scanf("%d", &val);
        fib(val);
    }
    return 0;
}

