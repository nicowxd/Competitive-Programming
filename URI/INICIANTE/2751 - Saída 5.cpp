#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 15;
    int b = a / 2;
    double c = 15.456;
    double d = c / 7;

    printf("Valores de b:\n");
    for (int i = 0; i < 13; i++)
        printf("-");
    printf("\n");

    printf("1) b = %d\n", b);
    printf("2) b = %20d\n", b);
    printf("3) b = %020d\n", b);
    printf("4) b = %-20d\n", b);
    printf("5) b = %d%%\n\n", b);
  
    printf("Valores de d:\n");
    for (int i = 0; i < 13; i++)
        printf("-");
    printf("\n");

    printf("1) d = %lf\n", d);
    printf("2) d = %.0lf\n", d);
    printf("3) d = %.1lf\n", d);
    printf("4) d = %.2lf\n", d);
    printf("5) d = %.3lf\n", d);
    printf("6) d = %20.3lf\n", d);
    printf("7) d = %020.3lf\n", d);
    printf("8) d = %-20.3lf\n", d);
    printf("9) d = %.2lf%%\n", d);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
