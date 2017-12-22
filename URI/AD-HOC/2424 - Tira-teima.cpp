// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tira-teima
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2424

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
 
    int x, y;
    scanf("%d %d", &x, &y);
    
    if ((x >= 0 and x <= 432) and (y >= 0 and y <= 468))
    	printf("dentro\n");
	else
		printf("fora\n");
    return 0;
}
