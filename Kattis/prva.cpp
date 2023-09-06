#include <bits/stdc++.h>

using namespace std;

int main()
{

    int r, c;
    string s[30];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        cin >> s[i];
    
    vector<string> v;
    string w = "";
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (s[i][j] == '#')
            {
                if ((int) w.size() > 1)
                    v.push_back(w);
                else
                    w = "";
            }
            else
                w += s[i][j];
        }
        
        if ((int) w.size() > 1)
            v.push_back(w);
        w = "";
    }
    
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (s[j][i] == '#')
            {
                if ((int) w.size() > 1)
                    v.push_back(w);
                else
                    w = "";
            }
            else
                w += s[j][i];
        }
        
        if ((int) w.size() > 1)
            v.push_back(w);
        w = "";
    }
    
    sort(v.begin(), v.end());

    cout << v[0] << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
