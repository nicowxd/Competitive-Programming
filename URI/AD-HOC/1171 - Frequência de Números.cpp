// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Frequência de Números
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1171

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

map<int, int> freq;
map<int, int>::iterator it;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n,val=1, x;
	scanf("%d", &n);	
	while(n--)
	{
	scanf("%d", &x);
	if (freq.find(x) != freq.end())
	{
	freq[x]+=val;
	}
	else
	{
	freq[x]=1;
	}
	}
	for(it = freq.begin(); it != freq.end(); it++)
	{
	printf("%d aparece %d vez(es)\n", it->first, it->second);
	}
	return 0;
}
