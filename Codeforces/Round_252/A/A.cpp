#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v, value;
	bool ok;
	vector<int> sellers;
	scanf("%d %d", &n, &v);
	for (int i = 0; i < n; i++)	
	{
		int k;
		ok = false;
		scanf("%d", &k);	
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &value);
			if (v > value and !ok)
			{
				sellers.push_back(i+1);
				ok = true;
			}
		}
	}
		
	cout << sellers.size() << endl;
	for (int i = 0; i < sellers.size(); i++)
		printf("%d ", sellers[i]);

	return 0;
}
