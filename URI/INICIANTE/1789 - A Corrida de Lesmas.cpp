// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Corrida de Lesmas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1789

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int l,vel,lvl;
    while(scanf("%d", &l) != EOF)
    {
        lvl = 1;
        for (int i =0; i < l; i++)
        {
            scanf("%d", &vel);
            if (vel < 10 && lvl == 1)
            {
                lvl = 1;
            }
            if ((vel >= 10 && vel < 20) && (lvl == 2 || lvl == 1))
            {
                lvl = 2;
            }
            if (vel >= 20)
            {
                lvl = 3;
            }
        }
        printf("%d\n", lvl);
    }
    return 0;
}

