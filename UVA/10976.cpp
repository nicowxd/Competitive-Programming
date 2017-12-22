#include <bits/stdc++.h>

using namespace std;

int main()
{


	int k;
	vector< pair<int, int> > v;
	
	while(scanf("%d", &k) != EOF)
	{
		v.clear();
		
		for (int i = 2*k; i > k; i--)
		{
			if ((k*i) % (i-k) == 0)
				v.push_back(make_pair((k*i)/(i-k), i));
		}

		reverse(v.begin(), v.end());
		
		printf("%d\n", (int) v.size());
		for (int i = 0; i < (int) v.size(); i++)
			printf("1/%d = 1/%d + 1/%d\n", k, v[i].first, v[i].second);
	}

	return 0;
}
