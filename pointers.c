#include<stdio.h>
void main(void)
{

	/* Program that has arran rates */
	/* Write a function to show the accepted rates in argument rates */
	/* Display the rates using the pointer notification */

	float rates[] = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
	
	float show (float *rates);

	show(rates);
			


}

float show (float *rates)
{
	int i;
	for (i = 0; i < 9; i++)
	printf("%f\n", *(rates + i));
}
