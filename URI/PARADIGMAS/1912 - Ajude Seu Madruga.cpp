// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ajude Seu Madruga
// Nível: 1
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1912

#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-5

int main()
{

	int n, a;
	double v[100050];
	
	while(scanf("%d %d", &n, &a), (n or a))
	{
		int sum = 0;
		double low = 0, hi = 0;
		
		for (int i = 0; i < n; i++)
		{
			scanf("%lf", v+i);
			sum += v[i];
			hi = max(hi, v[i]);
		}

		if (fabs(sum - (double) a) <= EPS)
			printf(":D\n");
		else
		{
			bool reach = false;
			int cnt = 0;
			double ans;

			while(low < hi and cnt < 50)
			{
				double mid = (low+hi)/2;
				double acc = 0;
				
				for (int i = 0; i < n; i++)
				{
					if (mid < v[i])
						acc += (v[i] - mid);
				}

				if (fabs(a - acc) <= EPS)
				{
					reach = true;
					ans = mid;
					break;
				}
				else if (acc - a > EPS)
					low = mid;
				else
					hi = mid;
				cnt++;
			}

			if (reach)
				printf("%.4lf\n", ans);
			else
				printf("-.-\n");
		}
	}

	return 0;
}
