#include <stdio.h>
#define LIM 10

void Ordenador_Vector (int numeros[LIM]);

int main()
{
    int numeros[LIM];
	printf("Bienvenido a ");
    printf("Bienvenido a mi programa...\n");
    printf("Ingrese 10 valores para ordenarlos de mayor a menor\n");
    for (int i = 0; i < LIM; i++)
    //lim significa que tomamos el límite de algo.
    //for permite repetir una instrucción o una instrucción compuesta un número especificado de veces.
    {
        printf(">>> ");
        scanf("%d", &numeros[i]);
    }
	printf("Vector Ingresado: {");
	for (int i = 0; i < LIM; i++)
	{
		if (i == 9)
		{
			printf("%d}\n", numeros[i]);
			break;
		} 
		printf("%d, ", numeros[i]);
	}
	Ordenador_Vector (numeros);
    return 0;
}

void Ordenador_Vector (int numeros[LIM])
{
	int i, j, aux;
	for (i = 0; i < LIM; i++)
	{
		for (j = i; j < LIM; j++)
		{
			if (numeros[i] > numeros[j])			// >>> Bubblesort <<<
			{
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("Vector Ordenado: {");
	for (i = 0; i < LIM; i++)
	{
		if (i == 9)
		{
			printf("%d}", numeros[i]);
			break;
		}
		printf("%d, ", numeros[i]);
	}
}
