#include <stdio.h>
using namespace std;
int main()
{
	float a, b, x;
	x = 0;

	printf("Inserisci a: ");
	scanf_s("%f", &a);
	printf("Inserisci b: ");
	scanf_s("%f", &b);

	x = -(b / a);
	if (a != 0)
	{
		printf("Il risultato dell'equazione e' %f ", x);
	}
	else
	{
		printf("L'equazione e' impossibile.");
	}

	return 0;
}

