#include<stdio.h>
void main(void)
#define NUM 10
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.10 */

	/* Program which asks for 2 lowercase letters */
	/* Pass the 2 entered characters using a pointer to a function names capit */
	/* The capit function should capitalize the 2 letters and the return the capitilzed values to */
	/* calling function though its pointer arguments */
	/* The calling function should then display all four letters */


	printf("Enter two letters: ");
	char let1, let2;
	scanf("%c %c", &let1, &let2);

	char capit(char *, char *);

	printf("The letters entered are: %c %c\n", let1, let2);	
	capit(&let1, &let2);
	printf("The letters capiltilzed into: %c %c\n", let1, let2);

	/* Question 4 */
	/* Program that declares 3 single dimensional arrays miles, gallons and mpg */
	/* Each array should hold 10 elements */
	
	float miles[NUM] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float gallons[NUM] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};	
	float mpg[NUM];

	/* Calculate miles per gallon */
	/* mpg = miles[0] / gallons[0]; */
	/* Use pointers when calculating and displaing elements of the array */

	int i;
	for (i = 0; i < NUM; i++)
	{
	mpg[i] = *(miles + i) / *(gallons + i);
	printf("Miles: %4.1f | Gallons: %3.1f = MPG: %4.2f\n", *(miles + i), *(gallons + i), *(mpg + i));
	}	

	/* Question 6 */
	/* 3 single dimensional arrays price, quantity, amount */
	
	double price[NUM] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	double quantity[NUM] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};

	/* Pass arrays into function extend */
	/* extend calculates the product of price and quantity */
		
	double amount[NUM];
	int j;

	double extend (double [], double [], double *);
	extend (price, quantity, &amount[0]);
	
	for (j = 0; j < NUM; j++)
	printf("%lf x %lf = %lf\n", price[j], quantity[j], amount[j]);
		

}

double extend(double price[], double qty[], double *amt)
{
	int i;
	for (i = 0; i < NUM; i++);
	*(amt + i) = price[i] * qty[i];
	
	return *amt;	
} 

char capit(char *low1, char *low2)
{
	*low1 = 'A' + (*low1 - 'a');
	*low2 = 'A' + (*low2 - 'a');

}

