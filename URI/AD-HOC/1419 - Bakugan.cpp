// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bakugan
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1419

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		int m[n],l[n], sumM = 0, sumL = 0;
		bool gone = false;
		int consecM = 1, consecL = 1, lastM, lastL;
		for (int i = 0; i < n; i++)
			scanf("%d", m+i);
		for (int i = 0; i < n; i++)
			scanf("%d", l+i);

		lastM = m[0];
		lastL = l[0];
		sumM += m[0];
		sumL += l[0];
		for (int i = 1; i < n; i++)
		{
			sumM += m[i];
			sumL += l[i];
			
			if (lastM == m[i])
				consecM++;
			else
				consecM = 1;
			if (lastL == l[i])
				consecL++;
			else
				consecL = 1;
			if (consecM == 3 && !gone)
			{
				if (consecL == 3)
					gone = true;
				else
				{
					gone = true;
					sumM += 30;
				}
			}
			if (consecL == 3 && !gone)
			{
				if (consecM == 3)
					gone = true;
				else
				{
					gone = true;
					sumL += 30;
				}
			}
			lastM = m[i];
			lastL = l[i];
		}
		if (sumM > sumL)
			printf("M\n");
		else if (sumM < sumL)
			printf("L\n");
		else
			printf("T\n");
	}
	return 0;
}
