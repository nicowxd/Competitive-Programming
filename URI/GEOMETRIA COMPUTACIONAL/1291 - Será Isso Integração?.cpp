/* https://www.youtube.com/watch?v=s2lK3M-X9Kc */
#include <bits/stdc++.h>

using namespace std;

double areaTotal(double radius) {
    return radius * radius;
}

double thirdArea(double radius) {
    double areaCircularSegment = (M_PI * areaTotal(radius)) / 6;
    double areaTriangle = (areaTotal(radius) * sqrt(3)) / 4;
    return areaTotal(radius) - areaCircularSegment - areaTriangle;
}

double secondArea(double radius) {
    double areaCircularSegment = (M_PI * areaTotal(radius)) / 4;
    return areaTotal(radius) - areaCircularSegment - 2 * thirdArea(radius);
}

double firstArea(double radius) {
    return areaTotal(radius) - 4 * thirdArea(radius) - 4 * secondArea(radius);
}

int main()
{
    double a;

    while(scanf("%lf", &a) != EOF) {
        printf("%.3lf %.3lf %.3lf\n", firstArea(a), 4 * secondArea(a), 4 * thirdArea(a));
    }

    return 0;
}