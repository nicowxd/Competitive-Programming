#include <bits/stdc++.h>

using namespace std;

bool found(int cur_x, int cur_y, int new_x, int new_y, int x, int y) {
	if ((cur_x == x && cur_y == y) || (new_x == x && new_y == y))
		return true;
	else if (cur_x == new_x && cur_x == x) {
		int min_y = min(new_y, cur_y);
		int max_y = max(new_y, cur_y);
		return (y >= min_y && y <= max_y);
	} else if (cur_y == new_y && cur_y == y) {
		int min_x = min(new_x, cur_x);
		int max_x = max(new_x, cur_x);
		return (x >= min_x && x <= max_x);
	} else {
		return false;
	}
}

int simul(int x, int y) {
	int ans = 0, cur_step = 1, turn = 0, cur_x = 0, cur_y = 0;

	while(true) {
		int new_x = cur_x, new_y = cur_y;
		if (turn % 4 == 0)
			new_x += cur_step;
		else if (turn % 4 == 1)
			new_y += cur_step;
		else if (turn % 4 == 2) {
			new_x -= cur_step;
		}
		else
			new_y -= cur_step;
		turn++;
		if (found(cur_x, cur_y, new_x, new_y, x, y))
			return ans;
		ans++;
		cur_x = new_x;
		cur_y = new_y;
		cur_step += (turn % 2 == 0);
	}
}


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	
	printf("%d\n", simul(x, y));
    return 0;
}
