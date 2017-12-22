// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cédulas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1018

#include <iostream>
using namespace std;
 
int main() {
    int x,y,a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    cin >> y;
    x = y;
    if (x >= 100)
    {
        a = x/100;
        x = x - a*100;
    }
    if (x>=50 && x<100)
    {
        b = x/50;
        x = x - b*50;
    }
    if (x>=20 && x<50)
    {
        c = x/20;
        x = x - c*20;
    }
    if (x>=10 && x<20)
    {
        d = x/10;
        x = x - d*10;
    }
    if (x>=5 && x<10)
    {
        e = x/5;
        x = x - e*5;
    }
    if (x>=2 && x<5)
    {
        f = x/2;
        x = x - f*2;
    }
    if (x == 1)
    {
        g = x/1;
        x = x - g*1;
    }
    cout << y << endl;
    cout << a << " nota(s) de R$ 100,00" << endl;
    cout << b << " nota(s) de R$ 50,00" << endl;
    cout << c << " nota(s) de R$ 20,00" << endl;
    cout << d << " nota(s) de R$ 10,00" << endl;
    cout << e << " nota(s) de R$ 5,00" << endl;
    cout << f << " nota(s) de R$ 2,00" << endl;
    cout << g << " nota(s) de R$ 1,00" << endl;
    return 0;
}
