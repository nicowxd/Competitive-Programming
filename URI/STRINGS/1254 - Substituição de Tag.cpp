#include <bits/stdc++.h>

using namespace std;

int main()
{
	string orig, val, line, aux;
	vector<int> start, end;

	while(cin >> orig)
	{
		int idx[60] = {0};
		aux = "";
		start.clear();
		end.clear();

		cin >> val;
		getchar();
		getline(cin, line);
		
		for (int i = 0; i < orig.size(); i++)
			orig[i] = tolower(orig[i]);
		
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] >= 'A' and line[i] <= 'Z')
				aux += tolower(line[i]);
			else
				aux += line[i];
			if (line[i] == '<')
				start.push_back(i);
			if (line[i] == '>')
				end.push_back(i);
		}
		
		int pos = aux.find(orig);
		while(pos != -1)
		{
			for (int i = 0; i < (int) start.size(); i++)
			{
				if (start[i] > pos)
					break;
				if (start[i] < pos and end[i] > pos)
					idx[pos] = 1;
			}
			pos = aux.find(orig, pos+1);
		}
		
		for (int i = 0; i < line.size(); i++)
		{
			if (idx[i])
			{
				cout << val;
				i += (orig.size() - 1);
			}
			else
				cout << line[i];
		}

		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
