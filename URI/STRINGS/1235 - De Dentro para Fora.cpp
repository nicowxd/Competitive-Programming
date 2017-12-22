// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: De Dentro para Fora
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1235

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	scanf("%d", &n);
	cin.get();
	while(n--)
	{
		string word, ans = "";
		getline(cin, word);
		int tam = (int) word.size();
		for (int i = (tam/2)-1; i >= 0; i--)
			ans+= word[i];
		for (int i = tam-1; i >= tam/2; i--)
			ans += word[i];
		cout << ans << endl;
	}
	return 0;
}
