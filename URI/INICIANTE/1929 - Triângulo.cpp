// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1929

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <stdlib.h>
#include <cmath>

using namespace std;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
int main()
{
    int a,b,c,d;
    bool forma = false;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        forma = true;
    }
    else if ((a + b > d) && (a + d > b) && (b + d > a))
    {
        forma = true;
    }
    else if ((a + c > d) && (a + d > c) && (c + d > a))
    {
        forma = true;
    }
    else if ((b + c > d) && (b + d > c) && (c + d > b))
    {
        forma = true;
    }
    printf("%c\n", forma ? 'S' : 'N');
}

