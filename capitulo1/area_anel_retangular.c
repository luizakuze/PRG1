/* Esse programa calcula a área de um anel retangular dados
os 2 lados da circunferência menor e os 2 lados da circunferência maior.
Na função main, há o teste das duas outras funções*/

#include <stdio.h>


float area_retangulo (float altura, float largura)
{
	float area;
	
	area = altura * largura;
	return area;
}


float area_anel (float altura1, float largura1,
	 	     float altura2, float largura2)
{
	float area_total, area_ret_maior, area_ret_menor;
	area_ret_maior = area_retangulo(altura1, largura1);
	area_ret_menor = area_retangulo(altura2, largura2);
	area_total = area_ret_maior - area_ret_menor;
	return area_total;
	
	//return area_retangulo(altura1, largura1) - area_retangulo(altura2, largura2);	
}


int main ()
{
	float altura1, largura1,
		altura2, largura2,
		area;
	

	//teste função area_retangulo
	printf("TESTE ÁREA RETÂNGULO!! Insira o valor da altura de um círculo:\n");
	scanf("%f", &altura1);
	printf("Insira o valor da largura:\n");
	scanf("%f", &largura1);
	
	area = area_retangulo(altura1, largura1);

	printf("A área do retângulo teste é %.3f :)\n", area);


	//função area_anel
	printf("Usuário, insira o valor da altura do retângulo maior:\n");
	scanf("%f", &altura1);
	printf("Insira o valor da largura do retângulo maior:\n");
	scanf("%f", &largura1);
	printf("Insira o valor da altura do retângulo menor:\n");
	scanf("%f", &altura2);
	printf("Insira o valor da largura do retângulo menor:\n");
	scanf("%f", &largura2);

	area = area_anel(altura1, largura1, altura2, largura2);
	
	printf("A área do anel retangular é %.3f :)\n", area);
	return 0;
}
