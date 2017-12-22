// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Copa do Mundo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2376

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	queue<char> times;
	for (int i = 0; i < 16; i++)
		times.push('A'+i);
	
	for (int i = 0; i < 15; i++)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			times.push(times.front());
			times.pop();
		}
		else
		{
			times.pop();
			times.push(times.front());
		}
		times.pop();
	}
	
	cout << times.front() << endl;

	return 0;
}
