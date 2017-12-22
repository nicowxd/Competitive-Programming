// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência Espelho
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2157

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		int b, e;
		string seq="";
		char take[10];

		scanf("%d %d", &b, &e);
		
		for (int i = b; i <= e; i++)
		{
			sprintf(take, "%d", i);
			seq+= take;
		}
		
		string rev = seq;
		reverse(rev.begin(), rev.end());
		seq += rev;
		cout << seq << endl;
	}	
	return 0;
}
