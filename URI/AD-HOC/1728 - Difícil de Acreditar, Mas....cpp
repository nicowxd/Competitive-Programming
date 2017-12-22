// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Difícil de Acreditar, Mas...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1728

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	string sent;
	while(cin >> sent)
	{
		if (sent == "0+0=0")
		{
			printf("True\n");
			break;
		}
		
		string fi = "", se = "", ans = "";
		
		int i = 0;
		for (i; sent[i] != '+'; i++)
			fi += sent[i];
		i++;
		for (i; sent[i] != '='; i++)
			se += sent[i];
		i++;
		for (i; i < (int) sent.size(); i++)
			ans += sent[i];
		
		reverse(fi.begin(), fi.end());
		reverse(se.begin(), se.end());
		reverse(ans.begin(), ans.end());
			
		int a = atoi(fi.c_str());
		int b = atoi(se.c_str());
		int c = atoi(ans.c_str());
		if (a + b == c)
			printf("True\n");
		else
			printf("False\n");
		
	} 	
	return 0;
}
