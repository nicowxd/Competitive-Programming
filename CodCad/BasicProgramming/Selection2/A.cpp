#include <iostream>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	
	a = (a + b)/2;
	
	if (a >= 7.0)
		cout << "Aprovado\n";
	else if (a >= 4.0)
		cout << "Recuperacao\n";
	else
		cout << "Reprovado\n";
	
	return 0;
}
