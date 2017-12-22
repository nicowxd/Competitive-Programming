#include <bits/stdc++.h>

using namespace std;

int main()
{

	int N, n;
	string big[1000], small[1000], smallF[1000], smallS[1000], smallT[1000];

	while(scanf("%d %d", &N, &n) and (N or n))
	{
		int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	
		for (int i = 0; i < N; i++)
			cin >> big[i];

		for (int i = 0; i < n; i++)
			cin >> small[i];

		for (int i = 0; i < n; i++)
		{
			string aux = "";
			for (int j = n-1; j >= 0; j--)
				aux += small[j][i];
			smallF[i] = aux;
		}

		for (int i = n-1, k = 0; i >= 0; i--, k++)
		{
			string aux = "";
			for (int j = n-1; j >= 0; j--)
				aux += small[i][j];
			smallS[k] = aux;
		}

		for (int i = n-1, k = 0; i >= 0; i--, k++)
		{
			string aux = "";
			for (int j = 0; j < n; j++)
				aux += small[j][i];
			smallT[k] = aux;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i + n > N or j + n > N)
					continue;
				bool flag1 = true, flag2 = true, flag3 = true, flag4 = true;
				for (int k = i, p = 0; k < i + n; k++, p++)
				{	
					for (int l = j, q = 0; l < j + n; l++, q++)
					{	
						if (big[k][l] != small[p][q])
							flag1 = false;
						if (big[k][l] != smallF[p][q])
							flag2 = false;
						if (big[k][l] != smallS[p][q])
							flag3 = false;
						if (big[k][l] != smallT[p][q])
							flag4 = false;
					}
				}
				if (flag1)
					cnt1++;
				if (flag2)
					cnt2++;
				if (flag3)
					cnt3++;
				if (flag4)
					cnt4++;
			}
		}

		printf("%d %d %d %d\n", cnt1, cnt2, cnt3, cnt4);
	}
	return 0;
}
