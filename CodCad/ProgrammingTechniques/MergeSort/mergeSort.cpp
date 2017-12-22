#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

void mergeSort(vector<int> &v)
{
	if (v.size() == 1)
		return;
	
	vector<int> u1, u2;

	for (int i = 0; i < (int) v.size()/2; i++)
		u1.push_back(v[i]);
	for (int i = (int) v.size()/2; i < (int) v.size(); i++)
		u2.push_back(v[i]);

	mergeSort(u1);
	mergeSort(u2);

	for (int i = 0; i < u1.size(); i++)
		printf("u1[%d] = %d\n", i, u1[i]);
	
	for (int i = 0; i < u2.size(); i++)
		printf("u2[%d] = %d\n", i, u2[i]);
	
	u1.push_back(INF);
	u2.push_back(INF);

	int ini1 = 0, ini2 = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (u1[ini1] < u2[ini2])
		{
			v[i] = u1[ini1];
			ini1++;
		}
		else
		{
			v[i] = u2[ini2];
			ini2++;
		}
		printf("v[%d] = %d\n", i, v[i]);
	}
	return;
}

int main()
{
	int n, x;
	vector<int> v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v.push_back(x);
	}

	mergeSort(v);
	for (int i = 0; i < (int) v.size(); i++)
		cout << v[i] << endl;
	return 0;
}
