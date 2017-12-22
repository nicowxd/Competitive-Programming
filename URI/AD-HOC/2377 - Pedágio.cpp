// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pedágio
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2377

#include <iostream>
 
using namespace std;
 
int main() {
 
    int l, d, k, p;
    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);
    
    int x = l / d;
    printf("%d\n", x*p + l*k);
    
    return 0;
}
