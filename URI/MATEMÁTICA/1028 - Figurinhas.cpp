// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Figurinhas
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1028

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int gcd (int a, int b) { return b == 0 ? a: gcd(b, a%b); }
int main()
{
    int n,x,y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", gcd(x,y));
    }
    return 0;
}

