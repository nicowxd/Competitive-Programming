#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n;
    scanf("%d", &c);

    while(c--){
        scanf("%d", &n);

        if (n <= 8000)
            printf("Inseto!\n");
        else
            printf("Mais de 8000!\n");
    }
    return 0;
}