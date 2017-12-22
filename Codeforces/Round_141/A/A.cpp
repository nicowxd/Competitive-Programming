#include <bits/stdc++.h>

using namespace std;

int main()
{

	set<int> shoes;
	set<int>::iterator it;
	int x, ans = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &x);
		if (shoes.find(x) != shoes.end())
			ans++;
		else
			shoes.insert(x);
	}
	
	printf("%d\n", ans);
	return 0;
}
