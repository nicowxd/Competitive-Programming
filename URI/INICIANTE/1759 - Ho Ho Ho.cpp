// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ho Ho Ho
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1759

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i < n-1)
        {
        printf("Ho ");
        }
        else
        {
        printf("Ho!\n");
        }
    }
    return 0;
}

