#include <iostream>

using namespace std;

const int MAXN = 60;

int main() {

    int n, v[MAXN], ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", v + i);

    for (int i = n - 2; i >= 0; i--){
        if (v[i] >= v[i + 1])
            ans++;
    }

    printf("%d\n", n - ans);
    return 0;
}