// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Retorno do Rei
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1808

#include <bits/stdc++.h>

using namespace std;

int main() { 

	//freopen("out.txt", "w", stdout); 
	int n = 0, sum = 0; 
	double ans;
	string number; cin >> number; 
	reverse(number.begin(), number.end());
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] == '0')
		{
			sum+= 10;
			i++;
			n++;
		}
		else
		{
			sum += number[i] - '0';
			n++;
		}
	}
	ans = (double) sum/n;
	printf("%.2lf\n", ans);
	return 0;
}


			



			


