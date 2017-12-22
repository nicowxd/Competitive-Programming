#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, d, erased;
	char x;

	while(scanf("%d %d", &n, &d), n or d)
	{
		
		erased = 0;
		deque<char> p;
	
		for (int i = 0; i < n; i++)
		{
			scanf(" %c", &x);

			while (!p.empty() and x > p.back() and erased < d)
			{
				p.pop_back();
				erased++;
			}
			
			if (p.size() < n - d)
				p.push_back(x);
		}
		
		while(!p.empty())
		{
			printf("%c", p.front());
			p.pop_front();
		}

		printf("\n");
	}

	return 0;
}
