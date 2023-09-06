#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans = "";
    cin >> s;

    for (int i = 0; i < (int) s.size(); ) {
        char c = s[i];
        ans += c;

        while(s[i] == c)
            i++;
    }

    cout << ans << endl;
    return 0;
}
