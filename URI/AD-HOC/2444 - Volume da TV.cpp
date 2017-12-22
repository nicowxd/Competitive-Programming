// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Volume da TV
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2444

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x, v, t;
	scanf("%d %d", &v, &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &x);
		v += x;
		if (v > 100)
			v = 100;
		if (v < 0)
			v = 0;
	}
	printf("%d\n", v);
	return 0;
}
