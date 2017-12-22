// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Língua do P
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2453

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	getline(cin, s);

	int next = 0;
	string ans = "";

	for (int i = 0; i < (int) s.size(); i++)
	{
		if (s[i] == 'p')
		{
			if (i >= next)
			{
				next = i+2;
				continue;
			}
			else
				ans += s[i];
		}
		else
			ans += s[i];
	}
	
	cout << ans << endl;
	return 0;
}
