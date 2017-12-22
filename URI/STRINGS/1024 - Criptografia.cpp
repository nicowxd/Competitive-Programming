// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Criptografia
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1024

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
int main()
{
     
    int x, tam;
    char msg[1010];
    cin >> x;
    cin.get();
    for (int i = 0; i < x; i++)
    {
        gets(msg);
        tam = strlen(msg);          
        for (int j = 0; j < tam; j++)
        {
            if (isalpha(msg[j])) 
                msg[j] = msg[j] + 3;
        }
        reverse(msg, msg + tam);
        int j = (tam/2);
        for (j; j < tam; j++)
        {
            msg[j] = msg[j] - 1;
        }
        printf("%s\n", msg);
    }   
    return 0;
}
