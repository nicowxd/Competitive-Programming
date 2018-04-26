#include <bits/stdc++.h>

using namespace std;

void proc1()
{
    for (int i = 1; i <= 39; i++)
        printf("-");
    printf("\n");
}

void proc2()
{
    printf("|");
    for (int i = 2; i <= 38; i++)
        printf(" ");
    printf("|\n");
}

int main()
{

    proc1();

    for (int i = 0; i < 5; i++)
        proc2();
    
    proc1();

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
