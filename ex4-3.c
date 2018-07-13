#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.4 */
	/* Excercise no.4-3 */

	printf("Enter the Number of Credits completed: ");
	int credits;
	scanf("%d", &credits);
	
	if (credits < 32)
	printf("Freshman\n");
	else if (credits >= 32 && credits <=63)
	printf("Sophomore\n");
	else if (credits >= 64 && credits <= 95)
	printf("Junior\n");
	else
	printf("Senior\n");

	/* Question 8 */
	printf("Enter the time on Deposit: ");
	float time, interest_rate;
	scanf("%f", &time);
	
	if (time >= 5)
	{
	interest_rate = 0.095;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}
	else if (time < 5 && time >= 4)
	{
	interest_rate = 0.090;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}
	else if (time < 4 && time >= 3)
	{
	interest_rate = 0.085;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}
	else if (time < 3 && time >= 2)
	{
	interest_rate = 0.075;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}
	else if (time < 2 && time >= 1)
	{
	interest_rate = 0.065;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}
	else 
	{
	interest_rate = 0.055;
	printf("Interest Rate: %1.4f\n", interest_rate);
	}


}
