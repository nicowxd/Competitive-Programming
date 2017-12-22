// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Embaralhando
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1980

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fat[16];

ll perm (int x)
{
	if (fat[x] != -1)
		return fat[x];
	for (int i = 1; i <= x; i++)
	{
		fat[i] = i*fat[i-1];
	}
	return fat[x];
}

int main()
{
	int tam;
	string anag;
	memset(fat, -1, sizeof fat);
	fat[0] = 1;
	while(cin >> anag && anag != "0")
	{
		tam = (int) anag.size();
		printf("%lld\n", perm(tam));
	}
	return 0;
}

