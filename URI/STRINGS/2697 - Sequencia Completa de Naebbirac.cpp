#include <bits/stdc++.h>

using namespace std;

int main()
{

	int k, n, v[1010] = {0};
	scanf("%d %d", &k, &n);

	for (int i = 0, x; i < n; i++)
	{
		scanf("%d", &x);
		v[x]++;
	}
	
	int qty;

	if (n % k)
	{
		int q = n / k;
		if (abs(n - q*k) < abs(n - (q+1) * k) and abs(n - q*k) < abs(n - (q-1)*k))
			qty = (q * k)/k;
		else if (abs(n - (q+1)*k) < abs(n - q*k) and abs(n - (q+1)*k) < abs(n - (q-1)*k))
			qty = ((q+1)*k)/k;
		else
			qty = ((q-1)*k)/k;
	}
	else
		qty = n / k;

	vector< pair<int, int> > resp;
	for (int i = 1; i <= k; i++)
	{
		if (v[i] != qty)
		{
			if (abs(v[i] - qty) == 1)
				resp.push_back(make_pair(i, v[i]));
			else
			{
				printf("*\n");
				return 0;
			}
		}
	}
	
	if ((int) resp.size() > 2)
		printf("*\n");
	else if ((int) resp.size() == 1)
	{
		if (resp[0].second > qty)
			printf("-%d\n", resp[0].first);
		else
			printf("+%d\n", resp[0].first);
	}
	else
	{
		int prim = resp[0].second;
		int sec = resp[1].second;
		
		if (prim > qty and sec > qty)
			printf("*\n");
		else if (prim < qty and sec < qty)
			printf("*\n");
		else
		{
			if (prim > qty and sec < qty)
				printf("-%d +%d\n", resp[0].first, resp[1].first);
			else
				printf("-%d +%d\n", resp[1].first, resp[0].first);
		}
	}

	return 0;
}
