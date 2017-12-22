// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: URI
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1787

#include <bits/stdc++.h>

using namespace std;

int ispower(int x)
{
	int ans = 1;
	while(x != 1)
	{
		if (x % 2)
		{
			ans = 0;
			break;
		}
		else
			x/=2;
	}
	return ans;
}

int main()
{

	int n;	
	while(scanf("%d", &n), n)
	{
		int rita = 0, uilton = 0, ingred = 0, ui, ri, li;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &ui, &ri, &li);
		
			if (ispower(ui))
			{
				uilton++;
				if ((ui > ri) and (ui > li))
					uilton++;
			}
			if (ispower(ri))
			{
				rita++;
				if ((ri > ui) and (ri > li))
					rita++;
			}
			if (ispower(li))
			{
				ingred++;
				if ((li > ui) and (li > ri))
					ingred++;
			}
		}
		if (uilton > rita and uilton > ingred)
			printf("Uilton\n");
		else if (rita > uilton and rita > ingred)
			printf("Rita\n");
		else if (ingred > uilton and ingred > rita)
			printf("Ingred\n");
		else
			printf("URI\n");
	}
			
	return 0;
}
