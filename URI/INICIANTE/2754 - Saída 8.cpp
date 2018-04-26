#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a = 234.345, b = 45.698;

    printf("%.6lf - %.6lf\n", a, b);
    printf("%.0lf - %.0lf\n", a, b);
    printf("%.1lf - %.1lf\n", a, b);
    printf("%.2lf - %.2lf\n", a, b);
    printf("%.3lf - %.3lf\n", a, b);
    printf("%e - %e\n", a, b);
    printf("%E - %E\n", a, b);
    printf("%.3lf - %.3lf\n", a, b);
    printf("%.3lf - %.3lf\n", a, b);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
