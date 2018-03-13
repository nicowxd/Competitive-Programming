#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string s;

    while(scanf("%d ", &n) != EOF)
    {
        getline(cin, s);
        
        int ans = 0, sz;
        stringstream ss(s);
        
        while(ss >> s)
        {
            ans++;
            sz = (int) s.size();
        }
        printf("%c\n", 'a' + (3*(ans-1) + (sz-1)));
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
