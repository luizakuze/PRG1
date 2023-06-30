// Esse programa converte um número em Farenheit para Celsius.

#include <stdio.h>

int main()
{
	float farenheit, celsius;
	
	printf("Entre com o valor em Farenheit\n");
	scanf("%f", &farenheit);

	celsius = (farenheit-32)/1.8;

	printf("%f\n",celsius);

	return 0;
}
