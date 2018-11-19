#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double xf, yf, xi, yi, vi, r1, r2;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF) {

        double plus = 1.5 * vi;

        double dist = hypot(xf - xi, yf - yi) + plus;

        if (r1 + r2 >= dist)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;
}