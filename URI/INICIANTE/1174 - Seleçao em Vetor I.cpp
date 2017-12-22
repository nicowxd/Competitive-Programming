// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Seleçao em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1174

#include <iostream>
using namespace std;

int main() {

	float A[100];
	for(int i = 0; i < 100 ; i++)
	{
		cin >> A[i];
		if (A[i] <= 10.0)
		{
			cout.precision(1);
			cout << "A[" << i <<"] = " << fixed << A[i] << endl;
		}
	}
	return 0;
}
