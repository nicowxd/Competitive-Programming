// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pegadinha de Evergreen
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2722

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d%*c", &n);
	
	while(n--)
	{
		string f, s;
		getline(cin, f);
		getline(cin, s);

		bool flag;
		if ((int) f.size() == (int) s.size())
			flag = true;
		else
			flag = false;
		for (int i = 0; i < (int) f.size()-1; i+=2)
		{
			if (!flag and i + 2 == (int) f.size())
				printf("%c%c%c", f[i], f[i+1], s[i]);
			else
				printf("%c%c%c%c", f[i], f[i+1], s[i], s[i+1]);
		}
		printf("\n");
	}

	return 0;
}
