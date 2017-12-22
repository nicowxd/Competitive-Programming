// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: WERTYU
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1196

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string teclado = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string entrada;
    int tam, p;
    while(getline(cin, entrada))
    {
        tam = entrada.size();
        for (int i = 0; i < tam; i++)
        {
            if (entrada[i] == ' ' || entrada[i] == 'Q' || entrada[i] == 'A' || entrada[i] == 'Z')
                printf("%c", entrada[i]);
            else
            {
                p = teclado.find(entrada[i]);
                printf("%c", teclado[p-1]); 
            }
        }
        printf("\n");
    }
    return 0;
}
        
