// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo do Limite
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1895

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,t,l,k=1,ali=0,bob=0,s;
    scanf("%d %d %d", &n, &t, &l);
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &s);
        if (k%2 != 0)
        {
            if (abs(t-s) <= l)
            {
                ali+=abs(t-s);
                t=s;
            }
        }
        else
        {
            if (abs(t-s) <= l)
            {
                bob+=abs(t-s);
                t=s;
            }
        }
        k++;
    }
    printf("%d %d\n", ali, bob);
    return 0;
}

