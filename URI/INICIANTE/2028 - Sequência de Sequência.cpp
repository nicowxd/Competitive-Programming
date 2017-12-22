// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência de Sequência
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2028

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, caso = 1;
	vector<int> vetor;
	while(scanf("%d", &n) != EOF)
	{
		printf("Caso %d: ", caso++);
		vetor.clear();
		vetor.push_back(0);
		for (int i = 1; i <= n; i++)
		{	
			int j = i;
			while(j--)
			{
				vetor.push_back(i);
			}
		}
		(int) vetor.size() == 1 ? printf("1 numero\n") : printf("%d numeros\n", (int) vetor.size());
		printf("%d", vetor[0]);
		for (int i = 1; i < (int) vetor.size(); i++)
			printf(" %d", vetor[i]);
		printf("\n\n");
	}
	return 0;
}	
