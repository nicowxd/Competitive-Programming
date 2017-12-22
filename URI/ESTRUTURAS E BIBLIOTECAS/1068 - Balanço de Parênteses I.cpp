// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Balanço de Parênteses I
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1068

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char expr[1005];
	stack<char> pilha;
	bool result;
	while(scanf("%s", expr) != EOF)
	{
		result = true;
		for (int i = 0; expr[i] != '\0'; i++)
		{
			if (expr[i] == '(')
				pilha.push(expr[i]);
			if (expr[i] == ')')
			{
				if (!pilha.empty())
					pilha.pop();
				else
				{
					result = false;
					break;
				}
			}
		}
		if (!pilha.empty())
		{
			result = false;
			while(!pilha.empty())
				pilha.pop();
		}
		printf("%s\n", result ? "correct" : "incorrect");	
	}

	return 0;
}
