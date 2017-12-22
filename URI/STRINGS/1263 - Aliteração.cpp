// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Aliteração
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1263

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char *p, ph[6000];
	vector<string> words;
	while(gets(ph))
	{
		words.clear();
		for (p = strtok(ph, " "); p; p = strtok(NULL, " "))
			words.push_back(p);
		
		char last = tolower(words[0][0]);
		int cnt = 0, ans = 0;
		for (int i = 1; i < (int) words.size(); i++)
		{
			if (tolower(words[i][0]) == last)
				cnt++;	
			else
				cnt = 0;
			if (cnt == 1)
				ans++;
			last = tolower(words[i][0]);
		}
		printf("%d\n", ans);
	}		
	return 0;
}
