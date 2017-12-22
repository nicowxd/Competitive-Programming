#include <cstdio>

using namespace std;

int main()
{
	int x, v[12345];

	scanf("%d", &x);
	
	for (int i = 0; i < x; i++)
		scanf("%d", v+i);
	
	int ans = 0, k[3] = {1, 0, 0};

	for (int i = 0; i < x; i++)
	{
		if (v[i] == k[0] and v[i+1] == k[1] and v[i+2] == k[2] and (x-i-1) >= 2)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
