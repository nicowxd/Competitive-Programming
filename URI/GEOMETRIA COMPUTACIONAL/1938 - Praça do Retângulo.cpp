// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Praça do Retângulo
// Nível: 4
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1938

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int main()
{

	int n, x, y, ans = 0;
	scanf("%d", &n);
	
	ii post[3300];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &post[i].first, &post[i].second);
	
	sort(post, post+n);

	for (int i = 0; i < n; i++)
	{
		int pty = post[i].second;
		
		stack<int> up, down;
		
		for (int j = 0; j < i; j++)
		{
			int ptyant = post[j].second;
			
			if (ptyant >= pty)
			{
				while(!up.empty() && up.top() > ptyant)
					up.pop();
				
				up.push(ptyant);
			}
			
			else
			{
				while(!down.empty() && down.top() < ptyant)
					down.pop();
					
				down.push(ptyant);
			}
		}
		ans += up.size() + down.size();
	}
		
	printf("%d\n", ans);

	return 0;	
}
