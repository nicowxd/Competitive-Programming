// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Alarme Despertador
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1103

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h1, m1, h2, m2, ans;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2), h1 || m1 || h2 || m2)
	{
		if (m2 >= m1)
		{
			if (h2 >= h1)
			{
				ans = (h2 - h1)*60 + m2 - m1;
			}
			else
			{
				h2+= 24;
				ans = (h2 - h1)*60 + m2 - m1;
			}
		}
		else
		{
			if (h2 > h1)
			{
				m2+= 60;
				ans = (h2 - h1 - 1)*60 + m2 - m1;
			}
			else if (h2 < h1)
			{
				
				h2+= 24;
				m2+= 60;
				ans = (h2 - h1 - 1)*60 + m2 - m1;
			}
			else
			{
				ans = 1440 - (m1 - m2);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
		



