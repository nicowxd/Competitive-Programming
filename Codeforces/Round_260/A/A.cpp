#include <bits/stdc++.h>

using namespace std;

int main()
{

	pair<int, int> laptop[100005];
	int n, price, qual;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> laptop[i].first >> laptop[i].second;
	}

	sort(laptop, laptop+n);
	for (int i = 1; i < n; i++)
	{
		if (laptop[i].second < laptop[i-1].second)
		{
			cout << "Happy Alex\n";
			return 0;
		}
	}
	
	cout << "Poor Alex\n";
	return 0;
}
