// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cachorros-Quentes
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2234

#include <iostream>
 
using namespace std;
 
int main() {
 
    double h, t;
    scanf("%lf %lf", &h, &t);
    
    double ans = h/t;
    printf("%.2lf\n", ans);
 
    return 0;
}
