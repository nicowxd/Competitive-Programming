// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matring
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1803

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s1, s2, s3, s4;

	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;

	int tam = (int) s1.size() - 1;
	long long int F = (s1[0] - '0')*1000 + (s2[0] - '0')*100 + (s3[0] - '0')*10 + (s4[0] - '0')*1;
	long long int L = (s1[tam] - '0')*1000 + (s2[tam] - '0')*100 + (s3[tam] - '0')*10 + (s4[tam] - '0')*1;
	
	for (int i = 1; i < tam; i++)
	{
		long long int mi = (s1[i] - '0')*1000 + (s2[i] - '0')*100 + (s3[i] - '0')*10 + (s4[i] - '0')*1;
		long long ans = ((F*mi) + L) % 257LL;
		printf("%c", (char) ans);
	}
	printf("\n");	
	return 0;
}
