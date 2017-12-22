// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Colisão
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1618

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
		
		if (rx >= ax and rx >= dx and rx <= cx and rx <= bx and ry >= ay and ry >= by and ry <= dy and ry <= cy)
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}
