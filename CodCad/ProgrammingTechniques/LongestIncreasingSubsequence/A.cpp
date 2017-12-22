#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int lis(vector<int> &v)
{
	vector<int> pilha;

	for (int i = 0; i < v.size(); i++)
	{
		vector<int>::iterator it = upper_bound(pilha.begin(), pilha.end(), v[i]);
		
		if (it == pilha.end())
			pilha.push_back(v[i]);
		else
			*it = v[i];
	}

	return pilha.size();
}

int main()
{
	
	vector<int> seq;
	string S;
	
	cin >> S;

	for (int i = 0; i < S.size(); i++)
		seq.push_back((int) S[i]);
	
	printf("%d\n", lis(seq));
	return 0;	
}
