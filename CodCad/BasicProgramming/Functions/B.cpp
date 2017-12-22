#include <iostream>
#include <cctype>
using namespace std;

string title(string F){
	int start = 0;
	bool first = true;
	string result = "";

	for (int i = start; i < F.size(); i++)
	{
		if (first)
		{
			result += toupper(F[i]);
			first = false;
		}
		else
		{
			if (F[i] == ' ')
			{
				result = result + ' ';
				first = true;
			}
			else
				result += tolower(F[i]);
		}
	}
	return result;
}

int main(){ 
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
	return 0;
}


