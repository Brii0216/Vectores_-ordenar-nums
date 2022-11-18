#include <stdio.h>
#define LIM 10

void Ordenador_Vector (int numeros[LIM]);

int main()
{
    int numeros[LIM];
	printf("Bienvenido");
    printf("Bienvenido al programan");
    printf("Ingrese 10 valores para ordenarlos de mayor a menor\n");
    for (int f = 0; f < LIM; f++)
    //lim significa que tomamos el límite de algo.
    //for permite repetir una instrucción o una instrucción compuesta un número especificado de veces.
    {
        printf(">>> ");
        scanf("%d", &numeros[f]);
    }
	printf("Vector Ingresado: {");
	for (int f = 0; f < LIM; f++)
	{
		if (f == 9)
		{
			printf("%d}\n", numeros[f]);
			break;
		} 
		printf("%d, ", numeros[f]);
	}
	Ordenador_Vector (numeros);
    return 0;
}

void Ordenador_Vector (int numeros[LIM])
{
	int f, j, aux;
	for (f = 0; f < LIM; f++)
	{
		for (j = f; j < LIM; j++)
		{
			if (numeros[f] > numeros[j])			// >>> Bubblesort <<<
			{
				aux = numeros[f];
				numeros[f] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("Vector Ordenado: {");
	for (f = 0; f < LIM; f++)
	{
		if (f == 9)
		{
			printf("%d}", numeros[f]);
			break;
		}
		printf("%d, ", numeros[f]);
	}
}
