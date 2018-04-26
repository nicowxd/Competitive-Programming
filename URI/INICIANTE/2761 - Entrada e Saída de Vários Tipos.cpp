#include <bits/stdc++.h>

using namespace std;

void spaces(int n)
{   
    for (int i = 1; i <= n; i++)
        printf(" ");
}

int main()
{

    int a;
    float b;
    char c;
    string d, e = "";

    cin >> a >> b >> c;
    getline(cin, d);
    
    printf("%d%.6f%c", a, b, c);
    for (int i = 1; i < (int) d.size(); i++)
    {
        e += d[i];
        printf("%c", d[i]);
    }
    printf("\n");
    
    printf("%d\t", a);
    printf("%.6f\t", b);
    printf("%c\t", c);
    printf("%s\n", e.c_str());

    printf("%d", a);
    spaces(10);
    printf("%.6f", b);
    spaces(10);
    printf("%c", c);
    spaces(10);
    printf("%s\n", e.c_str());

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
