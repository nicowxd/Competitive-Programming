#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;

int lcs[1001][1001];

int main(){    
    int n,m;
    string s1,s2;
    
    while(getline(cin,s1)){
        getline(cin,s2);
        n=s1.size();
        m=s2.size();
        
        for(int i = 0; i <= n;i++){
            for(int j = 0; j <= m;j++){
                if(i==0 || j==0){
                    lcs[i][j]=0;
                    continue;
                }
                if(s1[i-1]==s2[j-1]) lcs[i][j]=1+lcs[i-1][j-1];
                else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
        
        printf("%d\n",lcs[n][m]);
    }
    
    return 0;
}
