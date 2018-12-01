#include <bits/stdc++.h>

using namespace std;

string ans;
string bases = "NOP";
char s[5000 + 10];

bool check(int start, int end, int len){
    for (int i = 0; i < len; i++){
        if (s[start + i] != s[end + i])
            return false;
    }
    return true;
}

bool valid(int len){
    for (int i = 1; i + i <= len; i++){
        if (check(len - i - i, len - i, i))
            return false;
    }
    return true;
}

bool backtrack(int len) {
    if (len == 5002) {
        ans = s;
        return true;
    }
    
    for (auto &i : bases){
        s[len] = i;
        if (valid(len) && backtrack(len + 1))
            return true;
    }
    return false;
}

int main()
{
    backtrack(0);
    int n;
    while(scanf("%d", &n) && n){
        printf("%s\n", ans.substr(0, n).c_str());
    }
    return 0;
}
