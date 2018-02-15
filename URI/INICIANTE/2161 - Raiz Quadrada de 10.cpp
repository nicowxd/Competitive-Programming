#include <bits/stdc++.h>

using namespace std;

double sqten(int n)
{	
	if (n == 0)
		return 0;
	return (1.0/(6.0 + sqten(n-1)));
}

int main()
{

	int n;
	scanf("%d", &n);

	printf("%.10lf\n", 3.0 + sqten(n));
	return 0;
}
