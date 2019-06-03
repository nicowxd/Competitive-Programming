#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct point {
	long long x, y;
};

bool cmp(point a, point b) {
	return a.y - a.x < b.y - b.x;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	long long N, a, b;
	cin >> N;

	vector<point> student(N);

	for (long long i = 0; i < N; i++) {
		cin >> a >> b;
		student[i].x = a;
		student[i].y = b;
	}
	
	sort(student.begin(), student.end(), cmp);
   	
	ll ans = 0;
	for (long long i = 0; i < N; i++) {
		ll left = student[i].x * i;
		ll right = student[i].y * (N - i - 1);
		ans += (left + right);
	}

	cout << ans << endl;

	return 0;
}
