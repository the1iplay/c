#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.6 

	void find_max(int, int);
	int count, first, sec;
	

	for (count = 1; count <=100; count++)
	{
	printf("Enter 2 numbers: ");
	scanf("%d %d", &first, &sec);

	find_max(first, sec);
	}
	void check(int x, float y, double z) */
	/* int find_abs(double num) */
	/* float mult(float x, float y) */ 

	float totamt(float, float, float, float);
	float penny, dime, nickel, quarter;
	printf("Enter no. of pennies: ");
	scanf("%f", &penny);
	printf("Enter no. of nickels: ");
	scanf("%f", &nickel);
	printf("Enter no. of dimes: ");
	scanf("%f", &dime);
	printf("And lastly, enter the no. of quarters: ");
	scanf("%f", &quarter);

	printf("The total amount recieved is: $%4.2f\n", totamt(penny, nickel, dime, quarter));
	



}

float totamt(float pennies, float nickels, float dimes, float quarters)
{

	float total;
	total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
	return(total);


}


