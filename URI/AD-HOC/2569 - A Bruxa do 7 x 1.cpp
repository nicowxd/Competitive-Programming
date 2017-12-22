// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Bruxa do 7 x 1
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2569

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char a[20], b[20], op;
	
	scanf("%s %c %s", a, &op, b);
	
	int tama = strlen(a);
	int tamb = strlen(b);
	
	for (int i = 0; i < tama; i++)
	{
		if (a[i] == '7')
			a[i] = '0';
	}
	
	for (int i = 0; i < tamb; i++)
	{
		if (b[i] == '7')
			b[i] = '0';
	}
	
	int c, d, res;
	sscanf(a, "%d", &c);
	sscanf(b, "%d", &d);
	
	if (op == '+')
		res = c + d;
	else
		res = c * d;
	
	char ans[20];
	sprintf(ans, "%d", res);
	int tams = strlen(ans);
	
	for (int i = 0; i < tams; i++)
	{
		if (ans[i] == '7')
			ans[i] = '0';
	}
	
	int k;
	sscanf(ans, "%d", &k);
	printf("%d\n", k);

	
	return 0;
}
