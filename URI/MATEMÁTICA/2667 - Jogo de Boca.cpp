// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo de Boca
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2667

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < (int) n.size(); i++)
		ans += n[i] - '0';
	
	printf("%d\n", ans%3);
	return 0;
}
