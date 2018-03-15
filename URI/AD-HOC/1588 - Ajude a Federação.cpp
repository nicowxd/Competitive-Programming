#include <bits/stdc++.h>

using namespace std;

struct team
{
    string nome;
    int id;
    int points;
    int numV;
    int sG;
};

bool cmp(team a, team b)
{
    if (a.points != b.points)
        return a.points > b.points;
    if (a.numV != b.numV)
        return a.numV > b.numV;
    if (a.sG != b.sG)
        return a.sG > b.sG;
    return a.id < b.id;
}

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m;
        team teams[1000];
        string s1, s2;
        map<string, int> mp;
        
        scanf("%d %d ", &n, &m);

        for (int i = 0; i < n; i++)
        {
            cin >> s1;
            teams[i].nome = s1;
            teams[i].id = i;
            teams[i].sG = 0;
            teams[i].numV = 0;
            teams[i].points = 0;
            mp[s1] = i;
        }

        for (int i = 0, x, y; i < m; i++)
        {
            cin >> x >> s1 >> y >> s2;
            
            teams[mp[s1]].sG += x;
            teams[mp[s2]].sG += y;

            if (x > y)
            {
                teams[mp[s1]].numV++;
                teams[mp[s1]].points += 3;
            }
            else if (y > x)
            {
                teams[mp[s2]].numV++;
                teams[mp[s2]].points += 3;
            }
            else
            {
                teams[mp[s1]].points++;
                teams[mp[s2]].points++;
            }
        }

        sort(teams, teams + n, cmp);

        for (int i = 0; i < n; i++)
            printf("%s\n", teams[i].nome.c_str());
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
