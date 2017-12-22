// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Loteria
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2473

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x, ans = 0;
	vector<int> f;
	
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &x);
		f.push_back(x);
	}
		
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &x);
		if (find(f.begin(), f.end(), x) != f.end())
			ans++;
	}
	
	if (ans == 3)
		printf("terno\n");
	else if (ans == 4)
		printf("quadra\n");
	else if (ans == 5)
		printf("quina\n");
	else if (ans == 6)
		printf("sena\n");
	else
		printf("azar\n");
	
	return 0;
}
