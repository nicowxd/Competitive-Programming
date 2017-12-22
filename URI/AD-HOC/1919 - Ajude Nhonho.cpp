// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ajude Nhonho
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1919

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int k;
		bool big = false;
		scanf("%d", &k);
		
		for (int a = 0; a < 10; a++)
		{
			for (int b = a+1; b < 10; b++)
			{
				for (int c = b+1; c < 10; c++)
				{
					for (int d = c+1; d < 10; d++)
					{
						for (int e = d+1; e < 10; e++)
						{	
							int p[5] = {a, b, c, d, e}, sum = 0;
							do {
								sum += (p[4] + p[3]*10 + p[2]*100 + p[1]*1000 + p[0]*10000);
							} while(next_permutation(p, p+5));
							
							if (sum == k)
							{
								printf("{%d,%d,%d,%d,%d}\n", a, b, c, d, e);
								big = true;
							}
						}
					}
				}
			}
		}
		
		if (!big)
			printf("impossivel\n");
		printf("\n");
	}
	return 0;
}
