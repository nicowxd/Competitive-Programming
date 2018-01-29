#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = 1000010;

char str[MAXN];

void solve(int len)
{
	int z[MAXN] = {0};

	for (int i = 1, l = 0, r = 0; i < len; i++)
	{
		if (i > r)
			l = r = i;
		z[i] = min(z[i-l], r - i);
		while (i + z[i] < len && str[z[i]] == str[i + z[i]])
		{
			z[i]++;
			l = i;
			r = i + z[i];
		}
	}
	
	z[0] = len;
	int q;
	scanf("%d", &q);

	for (int i = 0, foo; i < q; i++)
	{
		scanf("%d", &foo);
		printf("%d\n", z[len-foo]);
	}
}

int main()
{

	int t, n;
	scanf("%d", &t);

	while(t--)
	{
		getchar();
		scanf(" %s", str);
		
		int len = strlen(str);
		reverse(str, str + len);
		
		solve(len);
	}
	
	return 0;
}
