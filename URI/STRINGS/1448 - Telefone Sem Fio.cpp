// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Telefone Sem Fio
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1448

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	cin.get();
	for (int i = 1; i <= n; i++)
	{
		printf("Instancia %d\n", i);
		string orig, t1, t2;
		getline(cin, orig);
		getline(cin, t1);
		getline(cin, t2);
		int cnt1 = 0, cnt2 = 0, tm1 = 5000, tm2 = 5000;
		for (int i = 0; i < (int) orig.size(); i++)
		{
			if (t1[i] == orig[i])
				cnt1++;
			if (t2[i] == orig[i])
				cnt2++;
			if (t1[i] != orig[i] && t2[i] == orig[i])
				tm2 = min(tm2, i);
			if (t2[i] != orig[i] && t1[i] == orig[i])
				tm1 = min(tm1, i);
		}
		if (cnt1 > cnt2)
			printf("time 1\n\n");
		else if (cnt1 < cnt2)
			printf("time 2\n\n");
		else
		{
			if (tm1 < tm2)
				printf("time 1\n\n");
			else if (tm1 > tm2)
				printf("time 2\n\n");
			else
				printf("empate\n\n");
		}
	}
			
	return 0;
}
