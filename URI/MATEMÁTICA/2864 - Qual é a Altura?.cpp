/* Achar o máximo da função quadrática ax^2 + bx + c = 0, com a < 0;

   Fórmula fechada: (-delta) / (4*a);

*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, a, b, c;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d %d", &a, &b, &c);

        int delta = (b*b - 4*a*c);
        double ans = (-delta * 1.0) / (4*a);
        printf("%.2lf\n", ans);
    }

    return 0;
}