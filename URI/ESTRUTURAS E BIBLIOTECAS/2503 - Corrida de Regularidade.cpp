#include <bits/stdc++.h>

using namespace std;

struct team
{
    int points;
    int idx;
};

bool cmp(team a, team b)
{
    if (a.points != b.points)
        return a.points < b.points;
    return a.idx < b.idx;
}

int main()
{   
    
    int v, p, t;

    while(scanf("%d %d %d", &v, &p, &t) && (v or p or t))
    {
        int pc[20];
        team teams[30];

        for (int i = 0; i < p; i++)
            scanf("%d", pc + i);
        for (int i = 0; i < t; i++)
        {
            teams[i].idx = i + 1;
            teams[i].points = 0;

            for (int j = 0, x; j < p; j++)
            {   
                scanf("%d", &x);
                int correct = (pc[j]*3600 / (1000*v));
                
                if (x > correct)
                {
                    if (x - correct >= 1200)
                        teams[i].points += 1200;
                    else
                        teams[i].points += (x - correct);
                }
                else if (x < correct)
                {
                    if (2*(correct - x) >= 1200)
                        teams[i].points += 1200;
                    else
                        teams[i].points += 2*(correct - x);
                }
            }
        }

        sort(teams, teams + t, cmp);

        for (int i = 0; i < t; i++)
            printf("%d%c", teams[i].idx, (i == t - 1 ? '\n' : ' '));
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
