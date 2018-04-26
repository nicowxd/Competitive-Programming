#include <bits/stdc++.h>

using namespace std;

int main()
{

    int caso = 1;
    double x, y, z;

    while(scanf("%lf %lf %lf", &x, &y, &z) != EOF && (x or y or z))
    {
        double qtyA = x * 1000, qtyB = y * 1000, qtyC = z * 1000;

        double qtyCroc = round(qtyA / 5);
        qtyA -= qtyCroc * 5;
        qtyB -= qtyCroc * 25;
        qtyC -= qtyCroc * 20;
        
        double qtyMisto = round(qtyB / 25);
        qtyB -= qtyMisto * 25;
        qtyC -= qtyMisto * 25;

        double qtyTrad = round(qtyC / 50);
        qtyC -= qtyTrad * 50;

        int qtySort = round(qtyTrad / 10);
        int qtyPred = round((qtyMisto - 10*qtySort) / 20);
        int qtyEsp = round((qtyCroc - 10*qtyPred - 10*qtySort) / 30);

        printf("Caso #%d: %d Especial, %d Predileta e %d Sortida\n", caso++, qtyEsp, qtyPred, qtySort);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
