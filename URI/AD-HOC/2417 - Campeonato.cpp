// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Campeonato
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2417

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int cv, ce, cs, fv, fe, fs;
	scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
	
	int ptc = cv*3 + ce;
	int ptf = fv*3 + fe;
	
	if (ptc > ptf)
		printf("C\n");
	else if (ptc < ptf)
		printf("F\n");
	else
	{
		if (cs > fs)
			printf("C\n");
		else if (cs < fs)
			printf("F\n");
		else
			printf("=\n");
	}

	return 0;
}
