#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, fib[122000] = {0}, tmp, ans[100001], s = 3, e = 5;
    fib[s] = 1;
    fib[e] = 1;
    scanf("%d", &k);

    while(fib[121393] == 0){
        fib[s + e] = 1;
        tmp = e;
        e += s;
        s = tmp;
    }

    for (int j = 4, x = 0; j <= 121393; j++){
        if (fib[j] == 0)
            ans[x++] = j;
    }

    printf("%d\n", ans[k - 1]);

    return 0;
}