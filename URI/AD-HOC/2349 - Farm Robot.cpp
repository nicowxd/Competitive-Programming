// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Farm Robot
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2349

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c, s;
	scanf("%d %d %d", &n, &c, &s);
	
	int v[1234], ans[123] = {0};
	for (int i = 0; i < c; i++)
		scanf("%d", v+i);
	
	int ac = 0;
	ans[0] = 1;
	for (int i = 0; i < c; i++)
	{
		
		if (v[i] == 1)
			ac = (ac + 1) % n;
		else
		{
			ac--;
			if (ac < 0)
				ac += n;
		}
		ans[ac]++;
	}
	
	printf("%d\n", ans[s-1]);	
	
	return 0;
}
