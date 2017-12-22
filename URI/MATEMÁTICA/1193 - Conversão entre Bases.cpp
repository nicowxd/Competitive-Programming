// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conversão entre Bases
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1193

#include <bits/stdc++.h>

using namespace std;

void dec2bin(int x)
{
        int k = 31;
        while((x & (1 << k)) == 0)
        {
                k--;
        }
        for (; k >= 0; k--)
        {
                if ((x & (1 << k)) != 0)
                        printf("1");
                else
                        printf("0");
        }
}

int main()
{
        int n;
        long int ans;
        char number[33], base[4];
        while(scanf("%d", &n) != EOF)
        {
                for (int i = 1; i <= n; i++)
                {

                        printf("Case %d:\n", i);
                        scanf("%s %s", number, base);
                        if (base[0] == 'b')
                        {
                                ans = strtol(number, NULL, 2);
                                printf("%d dec\n", ans);
                                printf("%x hex\n", ans);
                        }
                        else if (base[0] == 'd')
                        {
                                ans = strtol(number, NULL, 10);
                                printf("%x hex\n", ans);
                                dec2bin(ans);
                                printf(" bin\n");
                        }
                        else
                        {
                                ans = strtol(number, NULL, 16);
                                printf("%d dec\n", ans);
                                dec2bin(ans);
                                printf(" bin\n");
                        }
                        printf("\n");
                }
        }
        return 0;
}

