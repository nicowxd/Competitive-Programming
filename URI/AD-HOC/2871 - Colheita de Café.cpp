#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, x;
    while(scanf("%d %d", &m, &n) != EOF){
        int sum = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &x);
                sum += x;
            }
        }
        printf("%d saca(s) e %d litro(s)\n", sum / 60, sum % 60);
    }

    return 0;
}