#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float Massa, Altura, IMC;
		
		printf("Calcular IMC");
		
		printf("\nDigite a Sua Massa Corporal:");
		scanf("%f", &Massa);
		
		printf("\nDigite a Sua Altura:");
		scanf("%f", &Altura);
		
		IMC = Massa/pow(Altura,2);
		
		printf("Seu Indice de Massa Corporal é de: %.1f ",IMC);
		
		return 0;
		
}
