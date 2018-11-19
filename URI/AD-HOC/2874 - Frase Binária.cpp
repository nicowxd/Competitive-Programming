#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char s[10];

    while(scanf("%d ", &n) != EOF){

        for (int j = 0; j < n; j++) {
            int val = 0;
            scanf("%s", s);

            for (int i = strlen(s) - 1, p = 1; i >= 0; i--, p *= 2) {
                if (s[i] == '1')
                    val += p;
            }

            printf("%c", (char) val);
        }
        printf("\n");
    }

    return 0;
}