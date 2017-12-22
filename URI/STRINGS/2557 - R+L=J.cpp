// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: R+L=J
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2557

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	while(cin >> s)
	{
		getchar();
		
		string r = "", l = "", j = "";
		int idpl, ideq;
		bool iR = false, iL = false, iJ = false;
		
		for (int i = 0; i < (int) s.size(); i++)
		{
			if (s[i] == '+')
				idpl = i;
			if (s[i] == '=')
				ideq = i;
			if (s[i] == 'R')
				iR = true;
			if (s[i] == 'L')
				iL = true;
			if (s[i] == 'J')
				iJ = true;
		}
	
		for (int i = 0; i < idpl; i++)
			r += s[i];
		for (int i = idpl+1; i < ideq; i++)
			l += s[i];
		for (int i = ideq+1; i < (int) s.size(); i++)
			j += s[i];

		int x = atoi(r.c_str());
		int y = atoi(l.c_str());
		int z = atoi(j.c_str());

		if (iR)
			printf("%d\n", z-y);
		else if (iL)
			printf("%d\n", z-x);
		else
			printf("%d\n", x+y);

	}
	return 0;
}
