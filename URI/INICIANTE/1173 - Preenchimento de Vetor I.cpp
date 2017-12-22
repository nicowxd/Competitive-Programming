// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Preenchimento de Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    int v;
    scanf("%d", &v);
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, v);
        v*=2;
    }
    return 0;
}

