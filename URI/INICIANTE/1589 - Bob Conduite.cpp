// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bob Conduite
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1589

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x,r1,r2,rcond;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        rcond = 0;
        scanf("%d %d", &r1, &r2);
        rcond = r1+r2;
        printf("%d\n", rcond);
    }
    return 0;
}

