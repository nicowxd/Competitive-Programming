#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	
	queue<int> fila1, ans;
	
	for (int i = 1; i <= n; i++)
	{
		int x;
		scanf("%d", &x);
		fila1.push(x);
		ans.push(i);
	}
	
	while(fila1.size() != 1)
	{
		if ((fila1.front() - m) <= 0)
		{
			fila1.pop();
			ans.pop();
		}
		else
		{
			fila1.push(fila1.front()-m);
			fila1.pop();
			ans.push(ans.front());
			ans.pop();	
		}
	}
	
	printf("%d\n", ans.front());
	return 0;
}
