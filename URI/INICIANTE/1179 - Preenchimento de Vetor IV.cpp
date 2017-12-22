// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Preenchimento de Vetor IV
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1179

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> p, im;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int par=0, imp=0, val;
	for (int i = 0 ; i < 15 ; i++)
	{
	scanf("%d", &val);
	if (val%2 == 0)
	{
	p.push_back(val);
	par++;         
	if (par == 5)
	{
	for (int j = 0 ; j < 5; j++)
	{
	printf("par[%d] = %d\n", j, p[j]);
	}
	par = 0;
	p.clear();
	}
	}
	else
	{
	im.push_back(val);
	imp++;
	if (imp == 5)
	{
	for (int j = 0; j < 5; j++)
	{
	printf("impar[%d] = %d\n", j, im[j]);
	}
	imp = 0;
	im.clear();
	}
	}
	}
	if (!im.empty())
	{
	for (int i = 0; i < im.size(); i++)
	{
	printf("impar[%d] = %d\n", i, im[i]);
	}
	}
	if (!p.empty())
	{
	for (int i = 0; i < p.size(); i++)
	{
	printf("par[%d] = %d\n", i, p[i]);
	}
	}
	return 0;
}
	
