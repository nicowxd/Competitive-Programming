// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conversão Simples de Base
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1199

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char str[50], base[1][17] = {"0123456789ABCDEF"};

	while(scanf("%s", str) and str[0] != '-')
	{
		int num = 0;
		
		if (str[1] == 'x')
		{
			long long int ans = 0;
			int i = 0, len = strlen(str);
			
			for (int j = len-1; j >= 2; j--)
			{
				int pos;
				
				for (int k = 0; k < 16; k++)
					if (base[0][k] == toupper(str[j]))
						pos = k;
				long long int sum = 1;
				for (int k = 0; k < i; k++)
					sum *= 16;
				ans += (pos*sum);
				i++;
			}

			printf("%lld\n", ans);
		}
		else
		{
			string ans = "";
			for (int i = 0; str[i]; i++)
				num = num*10 + (str[i] - '0');
			
			while(num)
			{
				int mod = num % 16;
				ans += base[0][mod];
				num /= 16;
			}
			
			reverse(ans.begin(), ans.end());
			cout << "0x" << ans << endl;
		}
		
	}

	return 0;
}
