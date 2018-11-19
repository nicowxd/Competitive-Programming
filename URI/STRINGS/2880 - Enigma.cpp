#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10005;

int main() {
    char A[MAXN], B[MAXN];
    bool ok;

    scanf("%s", A);
    scanf("%s", B);

    int lenA = strlen(A), lenB = strlen(B);
    int all = lenA - lenB + 1, cant = 0;

    for (int i = 0; i < all; i++){
        ok = true;
        for (int j = 0; j < lenB && ok; j++){
            if (i + j < lenA && A[i + j] == B[j])
                ok = false;
        }
        if (!ok)
            cant++;
    }

    printf("%d\n", all - cant);
    return 0;
}