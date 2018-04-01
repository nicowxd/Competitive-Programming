#include <bits/stdc++.h>

using namespace std;

struct jog
{
    string nome;
    int points;
};

bool cmp(jog a, jog b)
{
    if (a.points != b.points)
        return a.points > b.points;
    return a.nome < b.nome;
}

int main()
{

    int n, caso = 1;
    while(scanf("%d", &n) && n)
    {
        jog jogador[1010];
        string s;
        getchar();

        for (int i = 0; i < n; i++)
        {
            int ma = 0, me = 1000000, sum = 0;
            cin >> s;

            for (int j = 0, x; j < 12; j++)
            {
                scanf("%d", &x);
                sum += x;
                if (x > ma)
                    ma = x;
                if (x < me)
                    me = x;
            }
            jogador[i].nome = s;
            jogador[i].points = sum - (ma + me);
        }
        
        sort(jogador, jogador + n, cmp);
        
        printf("Teste %d\n", caso++);
        
        int before = 0, idx = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (jogador[i].points == before)
                printf("%d %d %s\n", idx + 1, jogador[i].points, jogador[i].nome.c_str());
            else
            {
                printf("%d %d %s\n", i + 1, jogador[i].points, jogador[i].nome.c_str());
                idx = i;
            }
            before = jogador[i].points;
        }
        printf("\n");
    }
        
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
