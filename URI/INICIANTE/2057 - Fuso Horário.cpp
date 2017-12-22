// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fuso Horário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2057

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int s, t, f;
	scanf("%d %d %d", &s, &t, &f);
	int ans;
	ans = s+t+f;
	ans = ans % 24;
	if (ans < 0)
		printf("%d\n", ans+= 24);
	else 
		printf("%d\n", ans);
	return 0;
}
