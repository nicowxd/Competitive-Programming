// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Garçom
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2373

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, ans = 0, l, c;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &c);
        if (l > c)
            ans+= c;
    }
 
    printf("%d\n", ans);
    return 0;
}
