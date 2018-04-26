#include <bits/stdc++.h>

using namespace std;

void spaces(int n, char x)
{
    for (int i = 0; i < n; i++)
        printf(" ");
    printf("%c", x);
}

int main()
{

    spaces(7, 'A');
    printf("\n");

    spaces(6, 'B');
    spaces(1, 'B');
    printf("\n");

    spaces(5, 'C');
    spaces(3, 'C');
    printf("\n");

    spaces(4, 'D');
    spaces(5, 'D');
    printf("\n");

    spaces(3, 'E');
    spaces(7, 'E');
    printf("\n");

    spaces(4, 'D');
    spaces(5, 'D');
    printf("\n");

    spaces(5, 'C');
    spaces(3, 'C');
    printf("\n");

    spaces(6, 'B');
    spaces(1, 'B');
    printf("\n");

    spaces(7, 'A');
    printf("\n");
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
