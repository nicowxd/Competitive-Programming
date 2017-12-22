#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

int inverCnt(vector<int> &v)
{
	int inv = 0;
	
	if (v.size() == 1)
		return 0;
	
	vector<int> u1, u2;

	for (int i = 0; i < (int) v.size()/2; i++)
		u1.push_back(v[i]);
	for (int i = (int) v.size()/2; i < (int) v.size(); i++)
		u2.push_back(v[i]);
	
	inv += inverCnt(u1);
	inv += inverCnt(u2);

	u1.push_back(INF);
	u2.push_back(INF);

	int ini1 = 0, ini2 = 0;
	for (int i = 0; i < (int) v.size(); i++)
	{
		if (u1[ini1] < u2[ini2])
		{
			v[i] = u1[ini1];
			ini1++;
		}
		else
		{
			inv += u1.size()-ini1-1;
			v[i] = u2[ini2];
			ini2++;
		}
	}
	return inv;
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

	printf("%d\n", inverCnt(v));
	return 0;
}
