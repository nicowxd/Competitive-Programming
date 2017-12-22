// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Vice-Campeão
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2408

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int v[4];
    v[0] = a, v[1] = b, v[2] = c;
    
    sort(v, v+3);
    
    printf("%d\n", v[1]);
    return 0;
}
