// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Aritmética Primária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <bits/stdc++.h>

using namespace std;

int main()
{                         
	char n1[12], n2[12];
	int a[11], b[11], cnt, na, nb;
	while(scanf("%s %s", n1, n2), strcmp(n1, "0") || strcmp(n2, "0"))
	{	
	na = strlen(n1);
	nb = strlen(n2);
	cnt = 0;	         

	for (int i = na - 1; i >= 0; i--)
	{
		a[cnt++] = n1[i] - '0';
	}

	cnt = 0;

	for (int i = nb	- 1; i >= 0; i--)
	{
		b[cnt++] = n2[i] - '0';
	}

	int ans = 0, acc = 0;
	cnt = 0;
	while(cnt < na && cnt < nb)
	{
		acc = (a[cnt] + b[cnt] + acc) / 10;       
		if (acc)
			ans++;
		cnt++;
	}                 
		
	while(cnt < na)
	{
		acc = (a[cnt] + acc)/10;
		if (acc)
			ans++;
		cnt++;
	}
	while(cnt < nb)
	{
		acc = (b[cnt] + acc)/10;
		if (acc)
			ans++;
		cnt++;
	}

	if (ans == 0)
		printf("No ");
	else
		printf("%d ", ans);
	printf("carry operation");
	if (ans > 1)
		printf("s");
	printf(".\n");
	}

	return 0;
}	
		

