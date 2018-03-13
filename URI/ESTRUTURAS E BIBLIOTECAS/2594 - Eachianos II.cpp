#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    char str[130];
    string s;

    scanf("%d", &n);
    
    while(n--)
    {
        getchar();
        vector<int> pos;
        int cnt = 0;
        
        getline(cin, s);
        scanf("%s", str);
        
        stringstream ss(s);
        
        while(ss >> s)
        {
            if ((int) s.size() == strlen(str))
            {
            	int j = 0;
                
                for (int i = 0; i < (int) s.size(); i++)
                {
                    if (s[i] == str[j])
                        j++;
                }
                if (j == strlen(str))
                    pos.push_back(cnt);
            }
            cnt += (int) s.size() + 1;
        }

        if ((int) pos.size() == 0)
            puts("-1");
        else
        {
            for (int i = 0; i < (int) pos.size(); i++)
                printf("%d%c", pos[i], (i == (int) pos.size() - 1) ? '\n' : ' ');
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
