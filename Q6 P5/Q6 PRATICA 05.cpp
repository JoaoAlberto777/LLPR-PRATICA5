#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		float Base, Altura, Area;
		
		printf("Calcular Area do Triangulo em Centimetros");
		
		printf("\nDigite a Base do Triangulo:");
		scanf("%f", &Base);
		
		printf("\nDigite a Sua Altura:");
		scanf("%f", &Altura);
		
		Area = Base*Altura/2;
		
		printf("A Area do Triangulo é de: %.1f Cm",Area);
		
		return 0;
		
}
