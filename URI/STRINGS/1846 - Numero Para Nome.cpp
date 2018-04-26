#include <bits/stdc++.h>

using namespace std;

int main()
{
    char uni[11][30] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char dezena[10][30] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char dezena2[9][30] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa", "cem"};
    char centena[9][30] = {"cento", "duzentos" ,"trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos" ,"oitocentos", "novecentos"};

    int n;
    while(scanf("%d", &n) != EOF)
    {
        bool flag = 0;
        if (n >= 20000)
            flag = 1;
        if (n == 0)
        {
            printf("zero\n");
            continue;
        }
        if (n >= 100000)
        {
            if (n <= 100999)
                printf("cem");
            else
                printf("%s", centena[n / 100000 - 1]);
            n %= 100000;

            if (n == 0)
            {
                printf(" mil\n");
                continue;
            }
            else if (n < 1000)
            {
                if (n > 100 && n % 100)
                    printf(" mil ");
                else
                    printf(" mil e ");
            }
            else
                printf(" e ");
        }

        if (n >= 20000)
        {
            printf("%s", dezena2[n / 10000 - 2]);
            n %= 10000;

            if (n == 0)
            {
                printf(" mil\n");
                continue;
            }
            else if (n < 1000)
            {
                if (n > 100 && n % 100)
                    printf(" mil ");
                else
                    printf(" mil e ");
            }
            else
                printf(" e ");
        }

        if (n >= 10000)
        {
            printf("%s", dezena[(n / 1000) % 10]);
            n %= 1000;

            if (n == 0)
            {
                printf(" mil\n");
                continue;
            }
            else if (n < 1000)
            {
                if (n > 100 && n % 100)
                    printf(" mil ");
                else
                    printf(" mil e ");
            }
            else
                printf(" e ");
        }

        if (n >= 1000)
        {
            if (flag or n >= 2000)
                printf("%s ", uni[n / 1000]);  
            n %= 1000;

            if (n == 0)
            {
                printf("mil\n");
                continue;
            }
            else if (n < 100 or (n % 100 == 0))
                printf("mil e ");
            else
                printf("mil ");
        }

        if (n >= 100)
        {
            if (n == 100)
                printf("cem");
            else
                printf("%s", centena[n / 100 - 1]);
            n %= 100;

            if (n == 0)
            {
                printf("\n");
                continue;
            }
            else
                printf(" e ");
        }

        if (n >= 20)
        {
            printf("%s", dezena2[n / 10 - 2]);
            n %= 10;
            
            if (n == 0)
            {
                printf("\n");
                continue;
            }
            else
                printf(" e ");
        }

        if (n >= 10)
        {
            printf("%s\n", dezena[n % 10]);
            continue;
        }

        if (n < 10)
        {
            printf("%s\n", uni[n % 10]);
            continue;
        }
    }       

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
