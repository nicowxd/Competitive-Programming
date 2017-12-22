#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, val, k;
	while(cin >> n >> m)
	{
		map<int, vector<int> > array;
		
		for (int i = 1; i <= n; i++)
		{
			cin >> val;
			if (array.find(val) == array.end())
			{
				vector<int> tmp;
				array[val] = tmp;
			}
			array[val].push_back(i);
		}
		
		for (int i = 0; i < m; i++)
		{
			cin >> k >> val;
			if (array[val].size() < k)
				printf("0\n");
			else
				printf("%d\n", array[val][k-1]);
		}
	}
	return 0;
}
