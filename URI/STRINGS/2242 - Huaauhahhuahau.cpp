// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Huaauhahhuahau
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2242

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string seq, ans = "", rev = "";
	cin >> seq;

	for (int i = 0; i < (int) seq.size(); i++)
	{
		if (seq[i] == 'a' || seq[i] == 'e' || seq[i] == 'i' || seq[i] == 'o' || seq[i] == 'u')
			ans+= seq[i];
	}
	
	rev = ans;
	reverse(rev.begin(), rev.end());
	
	if (rev == ans)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
