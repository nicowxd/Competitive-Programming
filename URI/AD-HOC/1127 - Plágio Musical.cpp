#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int text[100010], patt[10010], b[10010];

void kmpPreprocess(int m) 
{ 
    int i = 0, j = -1; b[0] = -1;
    while (i < m)
    {
        while (j >= 0 && patt[i] != patt[j]) 
            j = b[j];
        i++; j++; 
        b[i] = j; 
    } 
}

bool kmpSearch(int n, int m) 
{
    int i = 0, j = 0;
    while (i < n) 
    { 
        while (j >= 0 && text[i] != patt[j]) 
            j = b[j];
        i++; j++;
        if (j == m)
            return true;     
    }
    return false;
}        

int main()
{
    map<string, int> mp;

    mp["A"] = 0;
    mp["A#"] = mp["Bb"] = 1;
    mp["B"] = mp["Cb"] = 2;
    mp["C"] = mp["B#"] = 3;
    mp["Db"] = mp["C#"] = 4;
    mp["D"] = 5;
    mp["Eb"] = mp["D#"] = 6;
    mp["E"] = mp["Fb"] = 7;
    mp["F"] = mp["E#"] = 8;
    mp["Gb"] = mp["F#"] = 9;
    mp["G"] = 10;
    mp["Ab"] = mp["G#"] = 11;

    int m, t;
    while(scanf("%d %d", &m, &t) && (m or t))
    {
        getchar();
        memset(text, 0, sizeof text);
        memset(patt, 0, sizeof patt);
        memset(b, 0, sizeof b);

        char s[3], prev[3];

        for (int i = 0; i < m; i++)
        {
            scanf("%s", s);
            if (i != 0)
            {
                int me = min(mp[s], mp[prev]), ma = max(mp[s], mp[prev]);
                text[i-1] = min(ma - me, 12 + me - ma);
            }
            strcpy(prev, s);
        }

        for (int i = 0; i < t; i++)
        {
            scanf("%s", s);
            if (i != 0)
            {
                int me = min(mp[s], mp[prev]), ma = max(mp[s], mp[prev]);
                patt[i-1] = min(ma - me, 12 + me - ma);
            }
            strcpy(prev, s);
        }

        kmpPreprocess(t-1);
        
        if (kmpSearch(m-1, t-1))
            puts("S");
        else
            puts("N");
    }

    return 0;
}
