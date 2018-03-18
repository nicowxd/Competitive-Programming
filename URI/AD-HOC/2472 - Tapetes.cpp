#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, l;

    scanf("%lld %lld", &n, &l);

    long long ans = (n - (l - 1)) * (n - (l - 1)) + (l - 1);
    printf("%lld\n", ans);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
