// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Como Treinar Seu Dragão
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1851

#include <cstdio>
#include <queue>
#include <iostream>
#include <utility>

using namespace std;

int main()
{
	long long int ti[123456], fi[123456], i = 0, ans = 0, vag = 0;
	priority_queue< pair<double, long long int> > drag;

	while(scanf("%lld %lld", &ti[i], &fi[i]) != EOF)
	{
		drag.push(make_pair((-1.0*ti[i])/fi[i], i));
		
		if (i == vag)
		{
			vag += ti[drag.top().second];
			ans += (i-drag.top().second)*(fi[drag.top().second]);
			drag.pop();
		}
		i++;
	}
	
	while(!drag.empty())
	{
		ans += (vag-drag.top().second)*(fi[drag.top().second]);
		vag += ti[drag.top().second];
		drag.pop();
	}

	printf("%lld\n", ans);
	return 0;
}
