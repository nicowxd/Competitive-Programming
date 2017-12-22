#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		int op, x;
		bool iss = true, isq = true, ispq = true;
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;
		
		for (int i = 0; i < n; i++)
		{		
			scanf("%d %d", &op, &x);
			if (op == 1)
			{
				s.push(x);
				q.push(x);
				pq.push(x);
			}
			else
			{
				if (!s.empty())
				{
					if (s.top() != x)
						iss = false;
					else
						s.pop();
				}
				else
					iss = false;
	
				if (!q.empty())
				{
					if (q.front() != x)
						isq = false;
					else
						q.pop();
				}
				else
					isq = false;

				if (!pq.empty())
				{
					if (pq.top() != x)
						ispq = false;
					else
						pq.pop();
				}
				else
					ispq = false;
			}
		}
		
		if (iss and !isq and !ispq)
			printf("stack\n");
		else if (isq and !iss and !ispq)
			printf("queue\n");
		else if (ispq and !iss and !isq)
			printf("priority queue\n");
		else if (!iss and !isq and !ispq)
			printf("impossible\n");
		else
			printf("not sure\n");
	}
	
	return 0;
}
