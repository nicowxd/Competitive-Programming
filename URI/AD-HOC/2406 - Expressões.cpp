// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Expressões
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2406

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string ph;
	scanf("%d", &n);
	
	while(n--)
	{	
		getchar();
		bool y = true;
		stack<char> v;

		cin >> ph;
		
		for (int i = 0; i < (int) ph.size(); i++)
		{
			if (ph[i] == '(' || ph[i] == '[' || ph[i] == '{')
				v.push(ph[i]);
			else if (v.empty())
					y = false;
			else if (ph[i] == ')' and v.top() != '(')
					y = false;					
			else if (ph[i] == ']' and v.top() != '[')
					y = false;
			else if (ph[i] == '}' and v.top() != '{')
					y = false;
			else
				v.pop();
		}
		
		if (!v.empty())
			y = false;
		
		if (y)
			printf("S\n");
		else
			printf("N\n");
	}

	return 0;
}
