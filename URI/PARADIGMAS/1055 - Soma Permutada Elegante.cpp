/*
Odd:

    in:  1, 3, 7, 12, 13
    out: 7, 1, 13, 3, 12 -> 37
         3, 12, 1, 13, 7 -> 38

    Check whether putting the lowest or the biggest value on the middle

 Even:

    in:  1, 5, 6, 7
    out: 6, 1, 7, 5

    Check which side to put the next two values
*/

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200;

int main() {
    int n, t, v[MAXN], ans;
    scanf("%d", &t);

    for (int j = 1; j <= t; j++){
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
            scanf("%d", v + i);

        sort(v, v + n);

        if (n & 1) {
            int maxV = v[n - 1], minV = v[0], left = v[0], right = v[1], nextLeft, nextRight;
            int ansMax = (maxV - left) + (maxV - right);

            // Start with biggest value on middle point
            for (int i = 1; i < n / 2; i++) {
                if (i & 1) {
                    nextLeft = v[n - 1 - i];
                    nextRight = v[n - 1 - (i + 1)];
                    ansMax += (nextLeft - left);
                    ansMax += (nextRight - right);
                    left = nextLeft;
                    right = nextRight;
                } else {
                    nextLeft = v[0 + i];
                    nextRight = v[0 + i + 1];
                    ansMax += (left - nextLeft);
                    ansMax += (right - nextRight);
                    left = nextLeft;
                    right = nextRight;
                }
            }

            // Start with lowest value on middle point
            left = v[n - 1], right = v[n - 2];
            int ansMin = (left - minV) + (right - minV);

            for (int i = 1; i < n / 2; i++) {
                if (i & 1) {
                    nextLeft = v[i];
                    nextRight = v[i + 1];
                    ansMin += (left - nextLeft);
                    ansMin += (right - nextRight);
                    left = nextLeft;
                    right = nextRight;
                } else {
                    nextLeft = v[n - 1 - i];
                    nextRight = v[n - 1 - (i + 1)];
                    ansMin += (nextLeft - left);
                    ansMin += (nextRight - right);
                    left = nextLeft;
                    right = nextRight;
                }
            }
            ans = max(ansMax, ansMin);
        }
        else {
            int left = v[0], right = v[n - 1], nextLeft, nextRight;
            ans = (right - left);

            for (int i = 1; i <= ((n - 2) / 2); i++){
                nextLeft = v[i], nextRight = v[n - 1 - i];
                if (abs(nextLeft - left) + abs(nextRight - right) > abs(nextLeft - right) + abs(nextRight - left)){
                    ans += (abs(nextLeft - left) + abs(nextRight - right));
                    left = nextLeft;
                    right = nextRight;
                } else {
                    ans += (abs(nextLeft - right) + abs(nextRight - left));
                    left = nextRight;
                    right = nextLeft;
                }
            }

        }

        printf("Case %d: %d\n", j, ans);
    }

    return 0;
}