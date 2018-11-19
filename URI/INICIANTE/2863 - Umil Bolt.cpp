#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    while(scanf("%d", &t) != EOF){

        double ans, ti;
        scanf("%lf", &ans);

        for (int i = 1; i < t; i++){
            scanf("%lf", &ti);
            if (ti < ans)
                ans = ti;
        }

        printf("%.2lf\n", ans);
    }
    return 0;
}