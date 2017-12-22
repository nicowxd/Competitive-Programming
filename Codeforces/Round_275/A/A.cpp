#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long unsigned int l, r, a = 0ULL, b = 0ULL, c = 0ULL;
	cin >> l >> r;
	
	for (long long unsigned int i = l; i <= r; i++)
	{
		for (long long unsigned int j = i+1; j <= r; j++)
		{
			for (long long unsigned int k = j+1; k <= r; k++)
			{
				if (__gcd(i,j) == 1 and __gcd(j,k) == 1 and __gcd(i,k) != 1)
				{
					cout << i <<" " << j << " "<< k << endl;
					return 0;
				}
			}
		}
	}
	printf("-1\n");
	return 0;
}
