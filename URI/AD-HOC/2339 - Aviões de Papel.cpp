// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Aviões de Papel
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2339

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c, p, f;
	scanf("%d %d %d", &c, &p, &f);
	printf("%s\n", (p/c) >= f ? "S" : "N");
	return 0;
}
