// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2397

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int v[3];
	for (int i = 0; i < 3; i++)	
		scanf("%d", v+i);
	sort(v, v+3);

	if (v[0] + v[1] <= v[2])
		printf("n\n");
	else if (v[2]*v[2] == (v[0]*v[0]) + (v[1]*v[1]))
		printf("r\n");
	else if (v[2]*v[2] > (v[0]*v[0]) + (v[1]*v[1]))
		printf("o\n");
	else
		printf("a\n");
	return 0;
}
