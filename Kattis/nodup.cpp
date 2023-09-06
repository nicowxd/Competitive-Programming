#include <bits/stdc++.h>

using namespace std;

int main()
{

    bool ok = true;
    string s;
    set<string> st;

    getline(cin, s);

    stringstream ss(s);
    
    while(ss >> s and ok)
    {
        if (st.find(s) != st.end())
            ok = false;
        else
            st.insert(s);
    }

    if (ok)
        puts("yes");
    else
        puts("no");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
