#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, a[250], b[250];
    while(scanf("%d", &n) && n)
    {
        set< pair<int, int> > s;
        
        for (int i = 0; i < n; i++)
            scanf("%d", a + i);
        for (int i = 0; i < n; i++)
            scanf("%d", b + i);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (__gcd(a[i], b[j]) == 1)
                    s.insert(make_pair(a[i], b[j]));
                if (__gcd(b[i], a[j]) == 1)
                    s.insert(make_pair(b[i], a[j]));
            }
        }

        printf("%d\n", (int) s.size());
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
