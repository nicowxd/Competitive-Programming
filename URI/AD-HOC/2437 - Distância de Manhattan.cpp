// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Distância de Manhattan
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2437

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
 
int main() {
 
    int xi, yi, xf, yf;
    scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
    
    printf("%d\n", abs(xi-xf) + abs(yi-yf));
 
    return 0;
}
