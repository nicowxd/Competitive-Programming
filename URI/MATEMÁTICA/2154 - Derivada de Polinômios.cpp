#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    while(scanf("%d ", &n) != EOF)
    {
        int cnt = 0;
        string s;
        getline(cin, s);

        stringstream ss(s);

        while(ss >> s)
        {
            if (s == "+")
                continue;
            cnt++;
            int x = 0, exp = 0, i = 0;

            for (; s[i] != 'x'; i++)
                x = x*10 + (s[i] - '0');
            i++;

            for (; s[i]; i++)
                exp = exp*10 + (s[i] - '0');

            printf("%dx", x * exp);
            if (exp > 2)
                printf("%d", exp-1);

            if (cnt != n)
                printf(" + ");
            else
                printf("\n");
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
