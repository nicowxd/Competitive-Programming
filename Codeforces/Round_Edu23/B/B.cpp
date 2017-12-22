#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n,v[123456];
	scanf("%d", &n);
		
	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	sort(v, v+n);
		
	int ans = 0, ac = v[2], i = 3;
	
	while(v[i] == ac)
	{
		i++;
		ans++;
	}
	
	if (v[0] == v[2])
		ans += 3;
	else if (v[1] == v[2])
		ans += 2;
	else
		ans += 1;
	printf("%d\n", ans);
		
	return 0;
}
