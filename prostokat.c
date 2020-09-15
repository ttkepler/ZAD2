#include <stdio.h>
#include "prostokat.h"

void prostokat ()
{
	float a,b;
	printf("Podaj dlugosc pierwszego boku prostokata: ");
	scanf("%f",&a);
	printf("Podaj dlugosc drugiego boku prostokata: ");
	scanf("%f",&b);
	printf("Pole prostokatu o bokach %8.2f i %8.2f wynosi : %8.2f\n",a,b,a*b);
}
