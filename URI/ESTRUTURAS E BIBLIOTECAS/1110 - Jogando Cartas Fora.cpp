// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogando Cartas Fora
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include <cstdio>
#include <queue>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		queue<int> q;
		for (int i = 1; i <= n; i++)
			q.push(i);
		
		printf("Discarded cards:");
		while(q.size() >= 2)
		{
			printf(" %d", q.front());
			q.pop();
			q.push(q.front());
			q.pop();
			if (q.size() >= 2)
				printf(",");
		}
		printf("\n");
		printf("Remaining card: %d\n", q.front());
	}
	return 0;
}
