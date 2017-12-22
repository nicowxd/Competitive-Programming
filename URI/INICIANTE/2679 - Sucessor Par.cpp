// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sucessor Par
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2679

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    scanf("%d", &n);
    
    if (n&1)
        printf("%d\n", n+1);
    else
        printf("%d\n", n+2);
 
    return 0;
}
