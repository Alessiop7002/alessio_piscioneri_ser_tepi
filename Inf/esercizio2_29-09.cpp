#include <stdio.h>
using namespace std;
int main()
{
	float a, b, c;

	printf("Inserisci il primo lato: ");
	scanf_s("%f", &a);
	printf("Inserisci il secondo lato: ");
	scanf_s("%f", &b);
	printf("Inserisci il terzo lato: ");
	scanf_s("%f", &c);

	if (a == b and b == c)
	{
		printf("Il triangolo e' equilatero");
	}
	else if (a == b or a == c or b == c)
	{
		printf("Il triangolo e' isoscele");
	}
	else if ((a * a + b * b) == c * c or (a*a + c*c) == b*b or (b*b + c*c) == a*a)
	{
		printf("Il triangolo e' rettangolo");
	}
	else
	{
		printf("Il triangolo e' scaleno");
	}

	return 0;
}