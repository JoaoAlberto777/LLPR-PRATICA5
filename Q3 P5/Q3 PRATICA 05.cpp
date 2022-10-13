#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float A, B, C, F1, F2, F3, F4;
		
		printf("O Homem que Calculava");
		
		printf("\nDigite o valor de A:");
		scanf("%f", &A);
		
		printf("\nDigite o valor de B:");
		scanf("%f", &B);
		
		printf("\nDigite o valor de C:");
		scanf("%f", &C);
		
		F1 = (A*B)/C;
		F2 = pow(A, 2) + B + (5*C);
		F3 = (A*B*C+B) + C/3 * 5-1;
		F4 = pow(A*B*C, 3)/2;
		
		printf("\n O resultado da equação com a Primeria Formula é: %.1f", F1);
		printf("\n O resultado da equação com a Segunda Formula é: %.1f", F2);
		printf("\n O resultado da equação com a Terceira Formula é: %.1f", F3);
		printf("\n O resultado da equação com a Quarta Formula é: %.1f", F4);
		
		return 0;
		
	}
