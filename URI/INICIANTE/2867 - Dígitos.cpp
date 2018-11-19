#include <bits/stdc++.h>

using namespace std;

int main() {

    int c, n, m;
    scanf("%d", &c);

    while(c--){
        scanf("%d %d", &n, &m);

        int ans = int (m * log10(n)) + 1;
        printf("%d\n", ans);
    }

    return 0;
}