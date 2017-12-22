// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Saldo do Vovô
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2434

#include <iostream>
#include <cstdio> 
using namespace std;
 
int main() {
 
    int n, s;
    scanf("%d %d", &n, &s);
    
    int ans = s, ac = s, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        ac += x;
        ans = min(ans, ac);
    }
 
    printf("%d\n", ans);
    return 0;
}
