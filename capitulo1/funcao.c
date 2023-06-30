/* Considere a função:
f(x) = 2x²+3x+1
Suponha que o domínio é definido somente para inteiros.
O programa calcula a média dos valores de f(x) para x entre 1 - 1000 
Crie uma função c que recebe 5 parâmetro:
- os 3 coeficientes de f(x), assumindo que são inteiros;
- o limite inferior e o limite superior de x.
A função deve retornar a média. Testar no programa main() */


float calculo_media (int a, int b, int c, int lim_inf, int lim_sup)
{
	int soma, funcao, num_termos, x;
	float media;

	// teste da consistência de limites, inverter caso necessário
	if (lim_inf > lim_sup) {
		int aux;
		aux = lim_sup;
		lim_sup = lim_inf;
		lim_inf = aux;
	}

	for ( soma = 0, x = lim_inf; x <= lim_sup; x++ ) {
		funcao = a * x * x + b * x + c; 
		soma = soma + funcao;
	}

	num_termos = lim_sup - lim_inf + 1;

	media = (float) soma / num_termos;
	return media;
}

int main()
{
	int a, b, c, lim_inf, lim_sup;
	float media;

	printf("Entre com os valores dos coeficientes:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Entre com o limite inferior e o limite superior:\n");
	scanf("%d %d", &lim_inf, &lim_sup);
	
	media = calculo_media(a, b, c, lim_inf, lim_sup);
	printf("A média é %.3f\n", media);

	/*Efetuar os testes restantes do programa
	
	media = calculo_media(2, 3, 1, 0, 3);
	printf("A média é %.3f\n", media);
	media = calculo_media(2, 3, 1, 3, 0);
	printf("A média é %.3f\n", media); */
	
	return 0;
}
