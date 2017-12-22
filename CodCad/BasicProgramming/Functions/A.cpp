#include <iostream>

using namespace std;

bool eh_primo(int x){
	
	bool yes = true;
	for (int i = 2; i < x; i++)
	{
		if (!(x % i))
			yes = false;
	}
	return yes;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x))
		cout<<"S"<<"\n";
	else
		cout<<"N"<<"\n";
	return 0;
}
