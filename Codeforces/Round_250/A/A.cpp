#include <bits/stdc++.h>

using namespace std;

int main()
{

	string a, b, c, d;

	cin >> a >> b >> c >> d;

	int lena = (int) a.size() - 2;
	int lenb = (int) b.size() - 2;
	int lenc = (int) c.size() - 2;
	int lend = (int) d.size() - 2;
	
	bool ba = false;
	bool bb = false;
	bool bc = false;
	bool bd = false;
	
	if (2*lena <= lenb and 2*lena <= lenc and 2*lena <= lend)
		ba = true;
	if (lena >= 2*lenb and lena >= 2*lenc and lena >= 2*lend)
		ba = true;
	if (2*lenb <= lena and 2*lenb <= lenc and 2*lenb <= lend)
		bb = true;
	if (lenb >= 2*lena and lenb >= 2*lenc and lenb >= 2*lend)
		bb = true;
	if (2*lenc <= lenb and 2*lenc <= lena and 2*lenc <= lend)
		bc = true;
	if (lenc >= 2*lenb and lenc >= 2*lena and lenc >= 2*lend)
		bc = true;
	if (2*lend <= lenb and 2*lend <= lenc and 2*lend <= lena)
		bd = true;
	if (lend >= 2*lenb and lend >= 2*lenc and lend >= 2*lena)
		bd = true;
	
	if (ba and !bb and !bc and !bd)
		puts("A");
	else if (bb and !ba and !bc and !bd)
		puts("B");
	else if (bd and !ba and !bb and !bc)
		puts("D");
	else
		puts("C");
	return 0;
}
