#include <iostream>

using namespace std;

int main()
{
	float a, b, c;

	printf("Inserisci a: ");
	scanf_s("%f", &a);
	printf("Inserisci b: ");
	scanf_s("%f", &b);
	printf("Inserisci c: ");
	scanf_s("%f", &c);

	if (a == 0)
	{
		printf("a e' nullo \n");
	}
	else if (a < 0)
	{
		printf("a e' negativo \n");
	}
	else
	{
		printf("a e' positivo \n");
	}

	if (b == 0)
	{
		printf("b e' nullo \n");
	}
	else if (b < 0)
	{
		printf("b e' negativo \n");
	}
	else
	{
		printf("b e' positivo \n");
	}

	if (a < 0)
	{
		printf("%f",-a);
	}
	else
	{
		printf("%f",a)
	}

	if (b < 0)
	{
		printf("%f", -b);
	}
	else
	{
		printf("%f", b)
	}

	if (c < 0)
	{
		printf("%f", -c);
	}
	else
	{
		printf("%f", c)
	}

	if (a < b)
	{
		if (a < c)
		{
			printf("Il minore e' a.");
		}
		else if (c < b)
		{
			printf("Il minore e' c.");
		}
		else
		{
			printf("Il minore e' b.");
		}

	}
	else if (c < b)
	{
		printf("Il minore e' c.");
	}
	else
	{
		printf("Il minore e' b.");
	}
	return 0;
}
