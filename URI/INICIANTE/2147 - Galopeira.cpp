// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Galopeira
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2147

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	scanf("%d", &n);
	
	while(n--)
	{
		string word;
		cin >> word;
		int k = (int) word.size();
		double x = k/100.0;
		printf("%.2lf\n", x);	
	}
	return 0;
}
