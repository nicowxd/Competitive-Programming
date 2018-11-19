#include <bits/stdc++.h>

using namespace std;

int main() {

    int c, a, b, res, y, ans;
    char op;
    scanf("%d", &c);

    while(c--){
        scanf("%d %c %d %*c %d", &a, &op, &b, &res);

        if (op == '+')
            y = a + b;
        else if (op == '-')
            y = a - b;
        else
            y = a * b;
        ans = abs(res - y);

        printf("E");
        for (int i = 0; i < ans; i++)
            printf("r");
        printf("ou!\n");
    }

    return 0;
}