#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, x, atual = 1;
	long long int ans = 0;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		if (atual > x)
			ans+= n-atual + x;
		else
			ans+= x - atual;
		
		atual = x;
	}

	cout << ans << endl;
	return 0;
}
