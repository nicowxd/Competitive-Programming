#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s[10];

    for (int i = 0; i < 10; i++)
        cin >> s[i];
    cout << s[2] << '\n' << s[6] << '\n' << s[8] << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
