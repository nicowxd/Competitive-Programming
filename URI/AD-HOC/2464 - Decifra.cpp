// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Decifra
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2464

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string p, s;
	map<char, char> crp;
	cin >> p >> s;

	for (int i = 0; i < 26; i++)
		crp['a'+ i] = p[i];
	
	for (int i = 0; i < (int) s.size(); i++)
		printf("%c", crp[s[i]]);
	
	printf("\n");
	return 0;
}
