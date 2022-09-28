// O programa imprime a média de todos os números PARES entre 1 e 100

#include <stdio.h>

int main()
{
	int soma_pares, numeros_pares, contador;
	float media;

	soma_pares = 0;
	numeros_pares = 0;

	contador = 1;
	while (contador < 101) {
		if (contador % 2 == 0) {
			soma_pares = soma_pares + contador;
			numeros_pares = numeros_pares + 1;
		}	
		contador = contador + 1;
	}

	media = (float) soma_pares / numeros_pares; // tem que cuidar para a divisão por 2 inteiros ser considerada float

	printf("A média de todos números PARES de 1 a 100 é: %.2f\n", media);		
	return 0;
}
