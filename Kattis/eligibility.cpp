#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int main()
{
	int n;
	cin >> n;
	
	while(n--) {
		char name[35];
		int year_start, year_birth, courses;
		scanf("%s %d/%*d/%*d %d/%*d/%*d %d", name, &year_start, &year_birth, &courses);
		
		bool isEligible = false;

		if (year_start >= 2010 || year_birth >= 1991)
			isEligible = true;
		
		if (!isEligible) {
			if (courses <= 40) {
				printf("%s coach petitions\n", name);
			} 
			else {
				printf("%s ineligible\n", name);
			}
		}
		else {
			printf("%s eligible\n", name);
		}
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
