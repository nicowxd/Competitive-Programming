// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Libertadores
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1536

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t1, t2, sg1, sg2, pt1, pt2, gf1, gf2;
	scanf("%d", &n);
	while(n--)
	{
		sg1 = 0, sg2 = 0, pt1 = 0, pt2 = 0, gf1 = 0, gf2 = 0;
		scanf("%d x %d", &t1, &t2);
		sg1+= t1;
		sg2+= t2;
		gf2+= t2; 
		if (t1 > t2)
		{
			pt1+= 3;
		}
		else if (t1 < t2)
		{
			pt2+= 3;
		}
		else
		{
			pt1+= 1;
			pt2+= 1;
		}
		scanf("%d x %d", &t2, &t1);
		sg1+= t1;
		sg2+= t2;
		gf1+= t1;
		if (t1 > t2)
			pt1+= 3;
		else if (t1 < t2)
			pt2+= 3;
		else
		{
			pt1+= 1;
			pt2+= 1;
		}

		if (pt1 > pt2)
			printf("Time 1\n");
		else if (pt1 < pt2)
			printf("Time 2\n");
		else
		{
			if (sg1 > sg2)
				printf("Time 1\n");
			else if (sg1 < sg2)
				printf("Time 2\n");
			else
			{
				if (gf1 > gf2)
					printf("Time 1\n");
				else if (gf1 < gf2)
					printf("Time 2\n");
				else
					printf("Penaltis\n");
			}
		}
	}
	return 0;
}





