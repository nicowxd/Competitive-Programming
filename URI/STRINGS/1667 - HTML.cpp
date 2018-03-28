#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    bool start = 1;
    string s;

    while(getline(cin, s))
    {
        stringstream ss(s);
        
        while(ss >> s)
        {
            if (s == "<br>")
            {
                cnt = 0;
                printf("\n");
                start = 1;
            }
            else if (s == "<hr>")
            {
                if (!start)
                    printf("\n");
                for (int i = 0; i < 80; i++)
                    printf("-");
                printf("\n");
                cnt = 0;
                start = 1;
            }
            else
            {
                if ((int) s.size() + cnt + 1 > 80)
                {
                    printf("\n");
                    printf("%s", s.c_str());
                    cnt = (int) s.size();
                    start = 0;
                }
                else
                {
                    if (cnt != 0)
                        printf(" ");
                    printf("%s", s.c_str());
                    cnt += (int) s.size() + 1;
                    start = 0;
                }
            }
        }
    }
    
    printf("\n");
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
