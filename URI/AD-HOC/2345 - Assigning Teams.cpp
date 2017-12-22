// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Assigning Teams
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2345

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int v[4];
	for (int i = 0; i < 4; i++)
		scanf("%d", v+i);
	
	sort(v, v+4);
	
	printf("%d\n", abs((v[3]+v[0])-(v[2]+v[1])));
	return 0;
}
