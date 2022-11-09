//Esse programa imprime a área de dois círculos, dados 2 raios.

#include <stdio.h>
#define PI 3.1415 


float area_circulo(float praio)
{
	float area;

	area = PI * praio * praio;
	return area;
}

int main()
{
	float raio, 
              area;

	printf("Entre com o valor do primeiro raio\n");
	scanf("%f", &raio);

	area = area_circulo(raio);

	printf("Esse é o valor da área do primeiro círculo = %.3f\n", area);

	printf("Entre com o valor do segundo raio\n");
	scanf("%f", &raio);
	
	area = area_circulo(raio);

	printf("Esse é o valor da área do segundo círculo = %.3f\n", area);

	return 0;
}
