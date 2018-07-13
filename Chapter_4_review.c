#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.4 */
	/* Excercise no.Review */

	int temp1, temp2;
	printf("Enter 2 temperatures: ");
	scanf("%d %d", &temp1, &temp2);
	
	if (temp1 == temp2)
	printf("Temperature 1: %d\nTemperature 2: %d\n", temp1,temp2);

	/* ----------------------------------------------------------*/
	
	/* int num1, num2, num3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2 && num1 > num3)
		if (num2 > num3)
		printf("%d %d %d\n", num1, num2, num3);
		else 
		printf("%d %d %d\n", num1, num3, num2);
	else if (num2 > num1 && num2 > num3)
		if (num1 > num3)
		printf("%d %d %d\n", num2, num1, num3);
		else 
		printf("%d %d %d\n", num2, num3, num1);
	else (num3 > num1 && num3 > num2)
		if (num1 > num2)
		printf("%d %d %d\n", num3, num1, num2);
		else 
		printf("%d %d %d\n", num3, num2, num1); */
	
	/* ------------------------------------------------------------*/

	/* Compute and Display a person's weekly salary */
	/* If hours worked less than or equal to 40 hrs / week */
	/* the person recieves $8.00 per hour */
	/* Else person recieves $320 plus $12.00 / hour */

	float pay, hours, hourly_pay = 8.00, ot_hourly_pay = 12.00, ot_bonus = 320.00;
	printf("Enter the no. of hours Employee has worked: ");
	scanf("%f", &hours);
	
	if (hours <= 40)
	{
	pay = hours * hourly_pay;
	printf("Employee worked: %4.2f\n", hours);
	printf("Employee pay: $ %4.2f\n", pay);	
	}
	else
	{
	pay = ot_bonus + (hours * ot_hourly_pay);
	printf("Employee worked: %4.2f\n", hours);
	printf("Employee pay: $ %4.2f\n", pay);	
	}

	/* Question 9 */
	



















	

	

}
