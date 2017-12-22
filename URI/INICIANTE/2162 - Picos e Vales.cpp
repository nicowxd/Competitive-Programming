// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Picos e Vales
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2162

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, alt[300];	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", alt + i);
		
	bool flag = true, sent;
	
	if (alt[0] > alt[1])
		sent = 1;
	else
		sent = 0;
	
	for (int i = 1; i < n && flag; i++)
	{
		if (sent == 1 && alt[i-1] > alt[i])
			sent = 0;
		else if (sent == 1 && alt[i-1] < alt[i])
			flag = false;
		else if (sent == 0 && alt[i-1] < alt[i])
			sent = 1;
		else
			flag = false;
	}
	
	if (flag)
		printf("1\n");	
	else
		printf("0\n");

	return 0;
}
