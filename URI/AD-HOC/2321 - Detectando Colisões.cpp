// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Detectando Colisões
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2321

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int ax0,ax1,ay0,ay1,bx0,bx1,by0,by1;
	scanf("%d %d %d %d", &ax0, &ay0, &ax1, &ay1);
	scanf("%d %d %d %d", &bx0, &by0, &bx1, &by1);

	if (ax1 < bx0 or ay1 < by0 or bx1 < ax0 or by1 < ay0)
		printf("0\n");
	else
		printf("1\n");
	return 0;
}
