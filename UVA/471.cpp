#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int t, c = 1;
	long long s1, s2, n;

	scanf("%d", &t);

	while(t--)
	{
		if (c++ > 1)
			printf("\n");
		scanf("%lld", &n);

		for (long long i = 1; i*n <= 9876543210; i++)
		{
			int used1 = 0, used2 = 0;
			long long tmp;
			tmp = i;
			bool flag = false;
		
			while(tmp and !flag)
			{
				if (used1 & (1 << tmp%10))
					flag = true;
				else
					used1 |= (1 << tmp%10);
				tmp /= 10;
			}
			tmp = i*n;
			while(tmp and !flag)
			{	
				if (used2 & (1 << tmp%10))
					flag = true;
				else
					used2 |= (1 << tmp%10);
				tmp /= 10;
			}
			
			if (flag)
				continue;
			else
				printf("%lld / %lld = %lld\n", i*n, i, n);
		}	
	}
	return 0;
}
