#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100010];

    while(scanf(" %s", s) != EOF)
    {
    	int len = strlen(s);
        bool first = 1, home = 1;
        list<char> l;
        list<char>::iterator it;
    	
        for (int i = 0; i < len; i++)
        {   
            if (s[i] == '[')
            {
                home = 1;
                first = 1;
            }
            else if (s[i] == ']')
                home = 0;
            else
            {
                if (home and first)
                {
                    it = l.begin();
                    first = false;
                    l.insert(it, s[i]);
                }
                else if (home and !first)
                    l.insert(it, s[i]);
                else
                {
                    it = l.end();
                    l.insert(it, s[i]);
                }
            }
        }
        for (it = l.begin(); it != l.end(); it++)
            printf("%c", *it);
        printf("\n");
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
