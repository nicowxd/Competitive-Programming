// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Instruções do Robô
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1574

#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int t, n, pos[101], ans, val;
	string inst;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		ans = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> inst;
			if (inst == "LEFT")
		        {
		        	ans--;
		        	pos[i] = -1;
		        }
		        else if (inst == "RIGHT")
		        {
		        	ans++;
		        	pos[i] = 1;
		        }
		        else
		        {
		        	scanf("%*s %d", &val);
		        	ans+= pos[val];
		        	pos[i] = pos[val];
		        }
		 }
		 printf("%d\n", ans);
	}
	return 0;
}	
