#include <bits/stdc++.h>

using namespace std;

int sum(int x)
{
    int ans = 0;

    while(x)
    {
        ans += x % 10;
        x /= 10;
    }

    return ans;
}

int main()
{

    int n;
    
    while(scanf("%d", &n) && n)
    {
        for (int j = 0; j < n; j++)
        {
            int v[2] = {0};
            string s;
            cin >> s;

            for (int i = 0; i < (int) s.size(); i++)
                v[i&1] += (s[i] - '0');
            printf("%d\n", sum(v[0]) + sum(v[1]));
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
