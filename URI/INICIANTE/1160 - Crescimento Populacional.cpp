// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Crescimento Populacional
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1160

#include <cstdio> // printf e scanf

int main(){
	
	// declaração de variáveis
	
	int t; 
	
	long long int pa, pb;
	
	double g1, g2;
	
	scanf("%d", &t); // leio o número de casos de teste
	
	for(int i=1; i<=t; i++){ // para cada caso de teste
		
		scanf("%lld %lld %lf %lf", &pa, &pb, &g1, &g2); // leio os valores de pa, pb, g1 e g2
		
		for(int ano=1; ano<=100; ano++){ // para cada ano que passa
			
			//atualizo as populações das cidades
			pa+=(g1/100)*pa;
			pb+=(g2/100)*pb;
			
			if(pa>pb){ // se a populaçao de A for maior que a de B
				
				printf("%d anos.\n", ano); // imprimo o ano em que estou
				
				break; // paro o loop
			}
			
		}
		
		// se após os 100 anos a população de A ainda não superar a de B, imprimo "Mais de 1 seculo."
		if(pa<=pb) printf("Mais de 1 seculo.\n");
	}
	
	return 0;
}
