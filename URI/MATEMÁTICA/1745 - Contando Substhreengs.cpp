#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int main()
{

    char s[MAXN];

    scanf("%s", s);
    
    int sum = 0, freq[3] = {1, 0, 0};
    long long ans = 0LL;
    
    for (int i = 0; s[i]; i++)
    {
        if (isdigit(s[i]))
        {
            int dig = (s[i] - '0');
            sum = (sum + dig) % 3;
            ans += freq[sum];
            freq[sum]++;
        }
        else
        {
            freq[0] = 1, freq[1] = 0, freq[2] = 0;
            sum = 0;
        }
    }

    printf("%lld\n", ans);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
