#include <bits/stdc++.h>

using namespace std;

int main()
{
	int bin[9], res;
	string ans;
	while(scanf("%d", &bin[0]) != EOF)
	{
		int menor = 1e9; 
		for (int i = 1; i < 9; i++)
			scanf("%d", &bin[i]);
		
		int bcg = bin[3]+bin[6]+bin[2]+bin[8]+bin[1]+bin[4];
		int bgc = bin[3]+bin[6]+bin[1]+bin[7]+bin[2]+bin[5];
		int cbg = bin[5]+bin[8]+bin[0]+bin[6]+bin[1]+bin[4];
		int cgb = bin[5]+bin[8]+bin[1]+bin[7]+bin[0]+bin[3];
		int gbc = bin[4]+bin[7]+bin[0]+bin[6]+bin[2]+bin[5];
		int gcb = bin[4]+bin[7]+bin[2]+bin[8]+bin[0]+bin[3];
		
		if (bcg < menor)
		{
			menor = bcg;
			ans = "BCG";
		}
		if (bgc < menor)
		{
			menor = bgc;
			ans = "BGC";
		}
		if (cbg < menor)
		{
			menor = cbg;
			ans = "CBG";
		}
		if (cgb < menor)
		{
			menor = cgb;
			ans = "CGB";
		}
		if (gbc < menor)
		{
			menor = gbc;
			ans = "GBC";
		}
		if (gcb < menor)
		{
			menor = gcb;
			ans = "GCB";
		}
	cout << ans << " ";
	cout << menor << '\n';
	}
	return 0;
}
