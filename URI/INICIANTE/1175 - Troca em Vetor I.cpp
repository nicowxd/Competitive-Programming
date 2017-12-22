// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Troca em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1175

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int N[21], val;
	for (int i = 19; i >= 0; i--)
		scanf("%d", &N[i]);
	
	for (int i = 0; i <= 19; i++)
		printf("N[%d] = %d\n", i, N[i]); 
	return 0;
}
