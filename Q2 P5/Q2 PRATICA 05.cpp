#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float N1, N2, Soma, Sub, Mult, Div;
		
		printf("Calculadora das 4 Opera��es Basicas ");
		
		printf("\nDigite um N�mero:");
		scanf("%f", &N1);
		
		printf("\nDigite um Segunda N�mero:");
		scanf("%f", &N2);
		
		Soma = N1+N2;
		Sub = N1-N2;
		Mult = N1*N2;
		Div = N1/N2;
		
		printf("\n O resultado da opera��o SOMA entre os N�meros %.1f e %.1f �: %.1f", N1, N2, Soma);
		printf("\n O resultado da opera��o SUBTRA��O entre os N�meros %.1f e %.1f �: %.1f", N1, N2, Sub);
		printf("\n O resultado da opera��o MULTIPLICA��O entre os N�meros %.1f e %.1f �: %.1f", N1, N2, Mult);
		printf("\n O resultado da opera��o DIVIS�O entre os N�meros %.1f e %.1f �: %.1f", N1, N2, Div);
		
	}
