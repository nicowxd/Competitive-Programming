#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

vector< pair<int, ii> > EdgeListFer;
vector< pair<int, ii> > EdgeListRod;

vi p, r;

int findSet(int i)
{
	return (p[i] == i) ? i : (p[i] = findSet(p[i]));
}

bool isSameSet(int a, int b)
{
	return findSet(a) == findSet(b);
}

void unionSet(int i, int j)
{
	if (!isSameSet(i, j))
	{
		int x = findSet(i);
		int y = findSet(j);

		if (r[x] > r[y])
			p[y] = x;
		else
		{
			p[x] = y;
			if (r[x] == r[y])
				r[y]++;
		}
	}
}


int main()
{

	int n, fer, rod, u, v, w;
	scanf("%d %d %d", &n, &fer, &rod);

	p.assign(n+1, 0);
	r.assign(n+1, 0);
	for (int i = 0; i < fer; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		EdgeListFer.push_back(make_pair(w, ii(u, v)));
	}
	
	for (int i = 0; i < rod; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		EdgeListRod.push_back(make_pair(w, ii(u, v)));
	}

	for (int i = 1; i <= n; i++)
		p[i] = i;

	int mstCost = 0;
	sort(EdgeListFer.begin(), EdgeListFer.end());
	sort(EdgeListRod.begin(), EdgeListRod.end());

	for (int i = 0; i < fer; i++)
	{
		pair<int, ii> front = EdgeListFer[i];

		if (!isSameSet(front.second.first, front.second.second))
		{
			mstCost += front.first;
			unionSet(front.second.first, front.second.second);
		}
	}
	
	for (int i = 0; i < rod; i++)
	{
		pair<int, ii> front = EdgeListRod[i];

		if (!isSameSet(front.second.first, front.second.second))
		{
			mstCost += front.first;
			unionSet(front.second.first, front.second.second);
		}
	}
	
	printf("%d\n", mstCost);
	return 0;
}
