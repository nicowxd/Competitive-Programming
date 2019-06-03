#include <bits/stdc++.h>

using namespace std;

int r1, c1, r2, c2;

int rook() {
	if (r1 == r2 || c1 == c2)
		return 1;
	else
		return 2;
}

int color(int row, int col) {
	if (((row & 1) && (col & 1)) || (!(row & 1) && !(col & 1)))
		return 1;
	else
		return 0;
} 


int bishop() {
	int start = color(r1, c1);
	int end = color(r2, c2);
	if (start != end)
		return 0;
	else if (abs(r1 - r2) == abs(c1 - c2))
		return 1;
	else 
		return 2;
}

int king() {
	int min_side = min(abs(r1 - r2), abs(c1 - c2));
	int max_side = max(abs(r1 - r2), abs(c1 - c2));
	return min_side + (max_side - min_side);	
}



int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	cin >> r1 >> c1 >> r2 >> c2;
	cout << rook() << " " << bishop() << " " << king() << endl;

	return 0;
}
