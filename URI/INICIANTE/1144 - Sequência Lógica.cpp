// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência Lógica
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1144

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,tmpi,tmpj,tmpk;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        tmpi = i+1;
        tmpj=tmpi*tmpi;
        tmpk=tmpj*tmpi;
        for (int j = 0; j < 2; j++)
        {
            printf("%d %d %d\n",tmpi,tmpj,tmpk);
            tmpj++;
            tmpk++;
        }

    }
    return 0;
}

