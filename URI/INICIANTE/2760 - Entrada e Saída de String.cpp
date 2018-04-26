#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    for (int i = 0; i < 10 and a[i]; i++)
        cout << a[i];
    for (int i = 0; i < 10 and b[i]; i++)
        cout << b[i];
    for (int i = 0; i < 10 and c[i]; i++)
        cout << c[i];
    cout << endl;

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
