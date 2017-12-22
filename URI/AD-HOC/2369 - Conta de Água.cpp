// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conta de Água
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2369

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 7;
	
	scanf("%d", &n);
	
	if (n > 10 and n <= 30)
		ans += (n-10)*1;
	if (n > 30)
		ans += 20;
	if (n > 30 and n <= 100)
		ans += (n-30)*2;
	if (n > 100)
		ans += 140 + (n-100)*5;
		
	printf("%d\n", ans);
	return 0;
}
