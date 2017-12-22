// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Getline Two - Frutas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1217

#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, i = 1, k;
	double price, total = 0, sum = 0;
	char fruits[10010], *p;
	vector<string> frutas;
	vector<int> days;
	scanf("%d", &n);
	k = n;
	while(n--)
	{
		frutas.clear();
		scanf("%lf", &price);
		cin.get();
		gets(fruits);
		for (p = strtok(fruits, " "); p; p = strtok(NULL, " "))
		{
			frutas.push_back(p);
		}
		printf("day %d: %d kg\n", i++,(int) frutas.size()); 
		sum += (int)frutas.size();
		total+= price;
	}
	printf("%.2lf kg by day\n", sum/k);
	printf("R$ %.2lf by day\n", total/k);
	return 0;
}



