/* O programa tem uma função que calcula a média entre todos os números entre dois valores inteiros passados como parâmetro.
A função deve retornar a média. Incluir um teste da função. */

#include <stdio.h>

float calculo_media (int num1, int num2)
{
	float media;

	media = (num1 + num2) / 2.0;
	return media;
}
int main()
{
	int num1, num2;
	float media;
	
	printf("Entre com os valores de 2 números inteiros: \n");
	scanf("%d %d", &num1, &num2);
 
	media = calculo_media (num1, num2);
	printf("A média entre %d e %d é: %.2f\n", num1, num2, media);

	/* teste da função calculo_media
	media = calculo_media(1, 2);
	printf("TESTE! O calculo da média teste é: %f\n", media); 
	media = calculo_media(2, 1);
	printf("TESTE! O calculo da média teste é: %f\n", media); */
	return 0;
}
