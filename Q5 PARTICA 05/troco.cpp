#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		
		int Valor, Troco;
		
		printf("\n Maquina de Cafe Ladrona");
		printf("\n Insira um Valor de 5 Reais ou mais (Sendo apenas multiplo de 5):");
		scanf("%d", &Valor);
		
		Troco = Valor % 7;
		
		printf("\n O valor do troco nao devolvido pela maquina é: %.1d", Troco);
		
		return 0;
	
		}
