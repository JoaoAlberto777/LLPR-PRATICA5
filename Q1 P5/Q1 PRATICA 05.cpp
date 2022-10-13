#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float Min, Sec;
		
		printf("Minutos em Segundos \N");
		
		printf("\N Informe a Quantidade em Minutos:");
		scanf("%f", &Min);
		
		Sec = Min*60;
		
		printf("\n A quatidade em segundos é de: %.2f", Sec);
		
		return 0;
		
		
		
}
