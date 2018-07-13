#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.10 */
	/* Excercise no.10.2 */

	float rates[] = {18.6, 11.4, 13.7, 9.5, 15.2, 17.6};
	int i;

	for (i = 0; i < 6; i++)
	{
	printf("Element %d in the Array contains: %f\n", i, *(rates + i));
	}

}
