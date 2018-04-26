#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[51] = {"AMO FAZER EXERCICIO NO URI"};

    printf("<%s>\n", str);
    printf("<%30s>\n", str);
    printf("<%.20s>\n", str);
    printf("<%-20s>\n", str);
    printf("<%-30s>\n", str);
    printf("<%.30s>\n", str);
    printf("<%30.20s>\n", str);
    printf("<%-30.20s>\n", str);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
