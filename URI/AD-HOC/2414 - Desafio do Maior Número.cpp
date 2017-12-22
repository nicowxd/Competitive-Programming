// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Desafio do Maior Número
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2414

#include <iostream>
#include <cstdio>

using namespace std;
 
int main() {
 
    int ans = 0, k;
    while(scanf("%d", &k), k)
    {
    	if (k > ans)
    		ans = k;
    }
    
    printf("%d\n", ans);
    return 0;
}
