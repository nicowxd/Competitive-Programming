// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tradutor do Papai Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1763

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

map<string,string> idiomas;

char linguas[30][30] = {"brasil", "alemanha", "austria", "coreia", "espanha", "grecia",
"estados-unidos", "inglaterra", "australia", "portugal", "suecia", "turquia", "argentina",
"chile", "mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
"marrocos", "japao"};

char frase[30][30] = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!", "Feliz Navidad!",
"Kala Christougena!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller",
"Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!", "Zalig Kerstfeest!",
"Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"};

string lingua;

int main()
{
    for (int i = 0; i < 24; i++)
    {
        idiomas[linguas[i]] = frase[i];
    }
    while(getline(cin, lingua))
    {
        if (idiomas.find(lingua) != idiomas.end())
        {
            cout << idiomas[lingua] << endl;
        }
        else
        {
            printf("--- NOT FOUND ---\n");
        }
    }
    return 0;
}

