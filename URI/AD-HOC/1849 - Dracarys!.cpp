#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int ld, cd, qd, lv, cv, qv, ans = 0, x;

    scanf("%d %d %d %d", &ld, &cd, &lv, &cv);

    qd = min(ld, cd);
    qv = min(lv, cv);
    ans = max(qd * qd, qv * qv);

    x = min(min(ld, lv), cd + cv);
    ans = max(ans, x * x);
    
    x = min(min(cd, cv), ld + lv);
    ans = max(ans, x * x);

    x = min(min(ld, cv), cd + lv);
    ans = max(ans, x * x);

    x = min(min(cd, lv), ld + cv);
    ans = max(ans, x * x);

    printf("%d\n", ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
