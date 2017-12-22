// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corrida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2416

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
 
    int x, y;
    scanf("%d %d", &x, &y);
    
    int k = x/y;
    printf("%d\n", x - k*y);
    return 0;
}
