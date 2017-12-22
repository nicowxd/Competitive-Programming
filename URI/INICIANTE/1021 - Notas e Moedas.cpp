// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Notas e Moedas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1021

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    double n,x,h=0,i=0,j=0,k=0,l=0;
    scanf("%lf", &n);
    x = n;
    if (x >= 100)
    {
        a = x/100;
        x = x - a*100;
    }
    if (x>=50 && x<100)
    {
        b = x/50;
        x = x - b*50;
    }
    if (x>=20 && x<50)
    {
        c = x/20;
        x = x - c*20;
    }
    if (x>=10 && x<20)
    {
        d = x/10;
        x = x - d*10;
    }
    if (x>=5 && x<10)
    {
        e = x/5;
        x = x - e*5;
    }
    if (x>=2 && x<5)
    {
        f = x/2;
        x = x - f*2;
    }
    if (x>=1 && x<2)
    {
        g = x/1;
        x = x - g*1;
    }
    if (x>=0.5 && x < 1)
    {
        h = x/0.50;
        x = x - (int)h*0.50;
    }
    if (x>=0.25 && x<0.5)
    {
        i = x/0.25;
        x = x - (int)i*0.25;
    }
    if (x>=0.10 && x < 0.25)
    {
        j = x/0.10;
        x = x - (int)j*0.10;
    }
    if (x>=0.05 && x < 0.10)
    {
        k = x/0.05;
        x = x - (int)k*0.05;
    }
    if (x>=0.01 && x < 0.05)
    {
        l = x/0.01;
        x = x - (int)l*0.01;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n",(int) h);
    printf("%d moeda(s) de R$ 0.25\n", (int) i);
    printf("%d moeda(s) de R$ 0.10\n", (int) j);
    printf("%d moeda(s) de R$ 0.05\n", (int) k);
    printf("%d moeda(s) de R$ 0.01\n", (int) l);
    return 0;
}

