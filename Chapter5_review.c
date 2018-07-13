#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.5 */

	/*int num;
	printf("Enter a num: ");
	scanf("%d", &num);
	int i;

	for (i = 0; i <= 100; i++)
	{
	num++;
	printf("The value of entered number is now: %d\n", num);
	} */
	
	/* Write multiples of 3 backward from 33 to 3 */

	int num = 33, count = 33;

	while (count >= 3)
	{
	printf("3 * %d = %d\n",num, 3 * num);
	num--;
	count--;
	}


}
