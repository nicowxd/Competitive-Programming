#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		int total[n], menor = 25;
		for (int i = 0; i < n; i++)
		{
			char imgs[26];
			int cnt = 0;
			
			for (int k = 0; k < 25; k++)
				scanf("%c", &imgs[k]);
			getchar();
			for (int j = 0; j < 25; j++)
			{
				if (imgs[j] == ' ')
					cnt++;
			}
		
			if (cnt < menor)
				menor = cnt;
			total[i] = cnt;
		}
		
		int ans = 0;
		for (int i = 0; i < n; i++)
			ans += total[i] - menor;

		printf("%d\n", ans);
	}
	return 0;
}
