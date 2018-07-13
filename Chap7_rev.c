#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.7 */

	float firstnum, secnum;
	void newval(float *, float *);
	
	printf("Enter 2 numbers: ");
	scanf("%f %f", &firstnum, &secnum);
	
	newval(&firstnum, &secnum);

	printf("The values of 1st and 2nd numbers: %4.2f and  %4.2f\n", firstnum, secnum);

}

void newval(float *num1_addr, float *num2_addr)
{

	printf("The values of 1st and 2nd numbers: %4.2f and %4.2f\n", *num1_addr, *num2_addr);
	
	*num1_addr = 89.5;
	*num2_addr = 90.5;
	return;


}
