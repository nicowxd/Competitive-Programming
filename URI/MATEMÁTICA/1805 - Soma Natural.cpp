// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma Natural
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

#include <iostream>
#include <cstdio>

using namespace std;

int main (){
    unsigned long long int a, b, c, d;
    c=0; d=0;
    scanf ("%llu %llu", &a, &b);
    d=(b-a)+1;
    c=(a+b)*d/2;
    printf ("%llu\n", c);
}

