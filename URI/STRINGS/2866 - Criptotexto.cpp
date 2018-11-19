#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d ", &n);

    while(n--){

        string s;

        cin >> s;

        for (int i = (int) s.size() - 1; i >= 0; i--){
            if (!isupper(s[i]))
                cout << s[i];
        }
        cout << endl;

    }
    return 0;
}