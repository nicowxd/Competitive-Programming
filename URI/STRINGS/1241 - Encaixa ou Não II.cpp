// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Encaixa ou Não II
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n,tama,tamb;
	string a, b;
	scanf("%d", &n);
	while(n--)
	{
	cin >> a >> b;
	tama = a.size(); 
	tamb = b.size();
	if ((a == b) || ((tama > tamb) && (a.substr(tama-tamb, tamb) == b)))
		printf("encaixa\n");
	else
		printf("nao encaixa\n");
	}
	return 0;
}
	
