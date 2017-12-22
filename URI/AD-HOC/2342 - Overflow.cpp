// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Overflow
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2342

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, p, q;
	char op;
	
	scanf("%d", &n);
	scanf("%d %c %d", &p, &op, &q);
	
	if (op == '+')
		printf("%s\n", (p + q) > n ? "OVERFLOW" : "OK");
	else
		printf("%s\n", (p * q) > n ? "OVERFLOW" : "OK");

	return 0;
}
