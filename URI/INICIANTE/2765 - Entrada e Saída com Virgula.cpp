#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int i;
    for (i = 0; s[i] != ','; i++)
        printf("%c", s[i]);
    printf("\n");
    
    i++;
    
    for (; s[i]; i++)
        printf("%c", s[i]);
    printf("\n");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
