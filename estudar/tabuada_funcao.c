/* O programa tem uma função que imprime a "tabuada" de um número n passado como parâmetro.
A função retorna -1 se o número não estiver entre 1-10, caso contrário retorna 0.
Testar a função no main. */

#include <stdio.h>

int tabuada (int n)
{
	int op;
	if (n < 1 || n > 10)
		return -1;
 
	for ( op = 0 ; op < 11 ; op++){


	}
	
	/*op = 0;
	while (op < 11) {
		int result;
		result = n * contador;
		printf("%d x %d = %d\n", n, op, result);
		op++;

	} */

	return 0;
}

int main()
{	
	int calculo, num;

	printf("Entre com o valor do operando: ");
	scanf("%d", num);

	calculo = tabuada(num);

	printf("TABUADA:\n%d", calculo);

	//printf("O retorno é: %d", tabuada(op)

	/* teste da função tabuada
	printf("TESTE!!"); 
	printf("O retorno de n = -5 é: %d", tabuada(-5);
	printf("O retorno de n = 5 é: %d", tabuada(5);
	printf("O retorno de n = 1 é: %d", tabuada(1);
	printf("O retorno de n = 10 é: %d", tabuada(10); */

	return 0;
}
