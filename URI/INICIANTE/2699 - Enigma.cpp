#include <bits/stdc++.h>

using namespace std;

int n;
string s, ans;
bool has = 0;

long long memo[1005][1005];

long long solve(int idx, int r)
{
    if (idx == (int) s.size())
    {
        if (r == 0)
        {
            if (!has)
            {
                cout << ans << endl;
                has = true;
            }
            return 1;
        }
        else
            return 0;
    }
    
    if (memo[idx][r] != -1)
        return memo[idx][r];

    long long sum = 0LL; 
    
    if (s[idx] == '?')
    {
        for (int i = (idx == 0); i <= 9; i++)
        {
            ans[idx] = i + '0';
            sum += solve(idx + 1, (r*10 + i) % n);
        }
    }
    else
    {
        ans[idx] = s[idx];
        sum += solve(idx + 1, (r*10 + (s[idx]-'0')) % n);
    }

    return memo[idx][r] = sum;
}

int main()
{
    long long x;

    cin >> s >> n;

    memset(memo, -1, sizeof memo);
    ans = s;
    
    x = solve(0, 0);

    if (!x)
        puts("*");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
