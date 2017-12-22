// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Atalhos Bloggo
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1239

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	string phr;
	while(getline(cin, phr))
	{
		int sub = 0, ast = 0, tam = phr.length();
		for (int i = 0; i < tam; i++)
		{
			if (phr[i] == '_' && (sub % 2) == 0)
			{
				printf("<i>");
				sub++;
			}
			else if (phr[i] == '_' && (sub % 2) != 0)
			{
				printf("</i>");
				sub++;
			}
			else if (phr[i] == '*' && (ast % 2) == 0)
			{
				printf("<b>");
				ast++;
			}
			else if (phr[i] == '*' && (ast % 2) != 0)
			{
				printf("</b>");
				ast++;
			}
			else
				printf("%c", phr[i]);
		}
		printf("\n");
	}
	return 0;
}

