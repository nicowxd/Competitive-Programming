// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Processador Amigável de I...
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1287

#include <bits/stdc++.h>

using namespace std;

int over[10] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 7};

bool check (char* x)
{
	if (strlen(x) == 0 or strlen(x) > 10)
		return false;
	
	bool flag = true;

	if (strlen(x) == 10)
	{
		for (int i = 0; i < strlen(x); i++)
		{
			int d = x[i] - '0';
			if (d > over[i])
				flag = false;
			else if (d == over[i])
				continue;
			else
				break;
		}
	}

	return flag;
}

int main()
{

	char x[100];

	while(gets(x))
	{
		bool flag = true;
		char aux[60] = "", ans[60] = "";
		
		for (int i = 0, j = 0; i < strlen(x); i++)
		{
			if (x[i] == 'l')
				aux[j++] = '1';
			else if (x[i] == 'O' or x[i] == 'o')
				aux[j++] = '0';
			else if (isdigit(x[i]))
				aux[j++] = x[i];
			else if (x[i] == ' ' or x[i] == ',')
				continue;
			else
			{
				flag = false;
				break;
			}
		}
		
		if (flag)
		{
			int s = 0;
			while(aux[s] == '0')
				s++;

			for (int i = s, j = 0; i < strlen(aux); i++)
				ans[j++] = aux[i];
		
			if (strlen(ans) == 0 and s != 0)
				ans[0] = '0';

			if (!check(ans))
				puts("error");
			else
			{
				int res;
				sscanf(ans, "%d", &res); 
				printf("%d\n", res);
			}
		}
		else
			puts("error");
	}
	
	return 0;
}
