#include <iostream>
#include <set>
#include <string>

using namespace std;

string cleanString (string x){
    bool afterArroba = false, beforePlus = true;
    string build = "";

    for (int i = 0; i < (int) x.size(); i++){
        if (x[i] == '@' and !afterArroba)
            afterArroba = true;
        if (afterArroba)
            build += x[i];
        else {
            if (x[i] == '+' and beforePlus)
                beforePlus = false;
            else if (!beforePlus)
                continue;
            else {
                if (x[i] != '.')
                    build += x[i];
            }
        }
    }
    return build;
}

int main() {

    int n;
    string s;
    set<string> ans;

    scanf("%d ", &n);

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        ans.insert(cleanString(s));
    }

    printf("%d\n", (int) ans.size());
    return 0;
}