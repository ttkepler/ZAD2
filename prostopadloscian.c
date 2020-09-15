#include <stdio.h>
#include "prostopadloscian.h"

void prostopadloscian ()
{
	float a,b,c;
	printf("Podaj dlugosc pierwszego boku prostopadloscianu: ");
	scanf("%f",&a);
	printf("Podaj dlugosc drugiego boku prostopadloscianu: ");
	scanf("%f",&b);
	printf("Podaj dlugosc trzeciego boku prostopadloscianu: ");
	scanf("%f",&c);
	printf("Pole prostokatu o bokach %8.2f , %8.2f i %8.2f wynosi : %8.2f\n",a,b,c,a*b*c);
}
