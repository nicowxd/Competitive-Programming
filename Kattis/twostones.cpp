#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    scanf("%d", &n);

    if (n&1)
        puts("Alice");
    else    
        puts("Bob");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
