// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Diferença Fácil Entre Datas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2315

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d, dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	int ans = 0;
	if (d > b)
	{
		if (a <= c)
		{
			ans += c-a;
			for (int i = b-1; i < d-1; i++)
				ans += dias[i];
		}
		else
		{	
			ans += c;
			for (int i = b-1; i < d-2; i++)
				ans += dias[i];
			ans += (dias[d-2]-a);
		}
	}
	else
	{
		if (a <= c)
		{
			ans += c-a;
			int i = b-1;
			for (int i = b-1; i != ((d-1)+12)%12; i++, i%=12)
				ans += dias[i];
		}
		else
		{
			ans += c;
			for (int i = b-1; i != ((d-2)+12)%12; i++, i%=12)
				ans += dias[i];
			ans += (dias[((d-2)+12)%12]-a);
		}
			 	
	}
	printf("%d\n", ans);
	return 0;
}
