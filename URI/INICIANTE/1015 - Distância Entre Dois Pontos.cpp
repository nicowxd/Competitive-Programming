// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Distância Entre Dois Pontos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    float x1,x2,y1,y2,d;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout.precision(4);
    cout << fixed << d << endl;
    return 0;
}
