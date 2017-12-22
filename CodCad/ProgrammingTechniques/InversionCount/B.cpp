#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1e18

long long int invCnt(vector<long long int> &v)
{
	long long int inv = 0;

	if (v.size() == 1)
		return 0;
	
	vector<long long int> u1, u2;

	for (int i = 0; i < (int) v.size()/2; i++)
		u1.push_back(v[i]);
	for (int i = (int) v.size()/2; i < (int) v.size(); i++)
		u2.push_back(v[i]);

	inv += invCnt(u1);
	inv += invCnt(u2);

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
			v[i] = u2[ini2];
			ini2++;
			inv += u1.size()-ini1-1;
		}
	}
	return inv;
}

int main()
{

	int n;
	long long x, y;
	vector<long long> v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld", &x, &y);
		long long dist = (x*x) + (y*y);
		v.push_back(dist);
	}

	reverse(v.begin(), v.end());
	
	printf("%lld\n", invCnt(v));
	return 0;
}
