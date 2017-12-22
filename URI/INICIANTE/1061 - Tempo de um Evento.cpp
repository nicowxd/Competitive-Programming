// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tempo de um Evento
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1061

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int dia_ini,dia_fin, hora_ini,hora_fin, min_ini,min_fin, seg_ini,seg_fin,w,x,y,z;
    scanf("%*s %d", &dia_ini);
    scanf("%d : %d : %d", &hora_ini, &min_ini, &seg_ini);
    scanf("%*s %d", &dia_fin);
    scanf("%d : %d : %d", &hora_fin, &min_fin, &seg_fin);
    w = dia_fin - dia_ini;
    x = hora_fin - hora_ini;
    y = min_fin - min_ini;
    z = seg_fin - seg_ini;
    if (x < 0)
    {
        if (y  < 0)
        {
            if (z < 0)
            {
                w = dia_fin - dia_ini - 1;
                x = 24 + hora_fin - hora_ini - 1;
                y = 60 + min_fin - min_ini - 1;
                z = 60 + seg_fin - seg_ini;
            }
            else
            {
                z = seg_fin - seg_ini;
                y = 60 + min_fin - min_ini;
                x = 24 + hora_fin - hora_ini - 1;
                w = dia_fin - dia_ini - 1;
            }
        }
        else
        {
            if (z < 0)
            {
                z = seg_fin - seg_ini;
                y = min_fin - min_ini - 1;
                x = 24 + hora_fin - hora_ini;
                w = dia_fin - dia_ini - 1;
            }
            else
            {
                z = seg_fin - seg_ini;
                y = min_fin - min_ini;
                x = 24 + hora_fin - hora_ini;
                w = dia_fin - dia_ini - 1;
            }
        }
    }
    else
    {
        if (y < 0)
        {
            if (z < 0)
            {
                z = 60 + seg_fin - seg_ini;
                y = 60 + min_fin - min_ini - 1;
                x = 24 + hora_fin - hora_ini - 1;
                w = dia_fin - dia_ini - 1;
            }
            else
            {
                z = seg_fin - seg_ini;
                y = 60 + min_fin - min_ini;
                x = 24 + hora_fin - hora_ini - 1;
                w = dia_fin - dia_ini - 1;
            }
        }
        else
        {
            if (z < 0)
            {
                z = 60 + seg_fin - seg_ini;
                y = min_fin - min_ini - 1;
                x = hora_fin - hora_ini;
                w = dia_fin - dia_ini;
            }
            else
            {
                z = seg_fin - seg_ini;
                y = min_fin - min_ini;
                x = hora_fin - hora_ini;
                w = dia_fin - dia_ini;
            }
        }
    }
    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);
    return 0;
}

