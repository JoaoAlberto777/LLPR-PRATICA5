#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float N1, N2, Soma, Sub, Mult, Div;
		
		printf("Calculadora das 4 Operações Basicas ");
		
		printf("\nDigite um Número:");
		scanf("%f", &N1);
		
		printf("\nDigite um Segunda Número:");
		scanf("%f", &N2);
		
		Soma = N1+N2;
		Sub = N1-N2;
		Mult = N1*N2;
		Div = N1/N2;
		
		printf("\n O resultado da operação SOMA entre os Números %.1f e %.1f é: %.1f", N1, N2, Soma);
		printf("\n O resultado da operação SUBTRAÇÃO entre os Números %.1f e %.1f é: %.1f", N1, N2, Sub);
		printf("\n O resultado da operação MULTIPLICAÇÃO entre os Números %.1f e %.1f é: %.1f", N1, N2, Mult);
		printf("\n O resultado da operação DIVISÃO entre os Números %.1f e %.1f é: %.1f", N1, N2, Div);
		
	}
