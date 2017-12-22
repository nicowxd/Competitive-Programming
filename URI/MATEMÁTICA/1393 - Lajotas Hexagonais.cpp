// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lajotas Hexagonais
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1393

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N;
	while(scanf("%d", &N) !=EOF && N)
	{

	// vetor com as respostas dos sub-problemas
	int nc[N+1];

	// casos bases
	nc[N] = 1;
	nc[N-1] = 1;

	// sub-problemas
	for(int K=N-2; K>=0; K--) 
	{
     	nc[K] = nc[K+1] + nc[K+2];
	}
// o problema principal é resolvido quando K é igual a 0, no laço acima.

// resposta
	printf("%d\n", nc[0]);
	}
	return 0;
}
