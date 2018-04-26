#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    string alph = "ABCD";
    
    while(scanf("%lld", &n) && n)
    {
        string ans = "";
        n *= n;

        while(n)
        {
            ans += alph[n % 4];
            n /= 4;
        }

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
