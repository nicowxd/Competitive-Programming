// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tacógrafo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2388

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    scanf("%d", &n);
    
    int ans = 0, t, v;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &t, &v);
        ans += t*v;
    }
 
    printf("%d\n", ans);
    return 0;
}
