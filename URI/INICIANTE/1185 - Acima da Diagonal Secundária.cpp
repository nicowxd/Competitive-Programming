// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Acima da Diagonal Secundária
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1185

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    char opr[5];
    double soma=0, coluna[15][15];
    scanf("%s", opr);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &coluna[i][j]);
        }
    }
    for (int i=0; i < 11; i++)
    {
        for (int j = 0; j < 11-i; j++)
        {
            soma+=coluna[i][j];
        }
    }
    if (strcmp(opr, "S") == 0)
    {
        printf("%.1f\n", soma);
    }
    if (strcmp(opr, "M") == 0)
    {
        printf("%.1f\n", soma/66.0);
    }
    return 0;
}

