/* Esse programa calcula a área de um anel, dado o raio de 2 circunferências
A área é calculada por R2 - R1.*/


#include <stdio.h>
#define PI 3.1415


float area_circulo(float raio)
{
	float area;

	area = PI * raio * raio;
	return area;
}

float area_anel(float raio_externo, float raio_interno)
{
	float area_circulo_externo, area_circulo_interno;

	area_circulo_externo = area_circulo(raio_externo);
	area_circulo_interno = area_circulo(raio_interno);
	float area_total = area_circulo_externo - area_circulo_interno;
	return area_total;
}

int main()
{
	float raio1, raio2, area;

	printf("Entre com o valor do primeiro raio\n");
	scanf("%f", &raio1);

	printf("Entre com o valor do segundo raio\n");
	scanf("%f", &raio2);

	area = area_anel(raio1, raio2);

	printf("Esse é o valor da área do anel = %.3f\n", area);
	return 0;
}
