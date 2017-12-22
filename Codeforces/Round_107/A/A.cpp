#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, l, c, d, p, nl, np;
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

	int drinks = (k*l)/nl;
	int limes = c*d;
	int salt = p/np;
	printf("%d\n", (min(drinks, min(limes, salt)))/n); 
	
	return 0;
}
