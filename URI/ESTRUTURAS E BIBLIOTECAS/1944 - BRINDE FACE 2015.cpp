#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, ans = 0;
    stack<char> st;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        char a, b, c, d;
        string s;
        
        if (st.empty())
        {
            st.push('F'); 
            st.push('A'); 
            st.push('C'); 
            st.push('E');
        }

        scanf(" %c %c %c %c", &a, &b, &c, &d);
            
        for (int k = 0; k < 4; k++)
        {
            s += st.top(); 
            st.pop();
        }

        if (s[0] == a and s[1] == b and s[2] == c and s[3] == d)
            ans++;
        else
        {
            st.push(s[3]); 
            st.push(s[2]); 
            st.push(s[1]); 
            st.push(s[0]);
            st.push(a); 
            st.push(b); 
            st.push(c); 
            st.push(d);
        }
    }

    printf("%d\n", ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
