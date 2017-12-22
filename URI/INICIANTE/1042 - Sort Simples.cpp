// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sort Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1042

#include <iostream>
#include <algorithm> // para fazer o sort
#include <vector> 


using namespace std;

int main(){
	
	vector <int> myvector;
	vector <int> vectorsort;
	int x;
	
	for(int i=0; i < 3; i++){
		cin >> x;
		myvector.push_back(x);
	}
	vectorsort = myvector;
	sort(vectorsort.begin(), vectorsort.end());	

	for(int i=0; i<3; i++){
		cout << vectorsort[i] << endl;
	}
	
	cout << endl;	

	for(int i=0; i<3; i++){
		cout << myvector[i] << endl;
	}
	return 0;
}		
	
