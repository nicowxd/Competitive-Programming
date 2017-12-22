// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Várias Notas Com Validação
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    int flag = 1;
    double x,y,media;
    while(flag != 2)
    {
        media = 0;
        scanf("%lf", &x);
        while(x < 0 || x > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &x);
        }
        scanf("%lf", &y);
        while (y < 0 || y > 10)
        {
            printf("nota invalida\n");
            scanf("%lf", &y);
        }
        media = (x+y)/(2.0);
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &flag);
        while(flag < 1 || flag > 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &flag);
        }
    }
    return 0;
}

