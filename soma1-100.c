// O programa imprime o somatório de todos os números entre 1 e 100

#include <stdio.h>

int main()
{
	int soma, contador;
	soma = 0; // elemento neutro da soma

	contador = 1;
	while (contador < 101) {
		soma = soma + contador;
		contador = contador + 1;
	}

	printf("A soma dos números de 1 a 100 é: %d\n", soma);		
	return 0;
}
