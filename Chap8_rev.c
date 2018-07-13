#include<stdio.h>
void main(void)
{
	/* Algorithm Development and Program Design Using C */
	/* Chapter no.8 */

	int temp[] = {98, 97, 101, 89, 73, 66};

	int count;

	for (count = 0; count <= 5; count++)
	printf("The temperature of %d is %d\n", count+1, temp[count]);	

	/* Excercise 8.2 */

	float slopes[] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	float max = slopes[0];
	float min = slopes[0];
	int i, j, k;

	for (i = 1; i <= 9; i++)
	{
	if (max < slopes[i])
			max = slopes[i];
	}
	printf("The maximum value is %f\n", max);
	
	for (j = 1; j < 9; j++)
	{
	if (min > slopes[j])
			min = slopes[j];

	}
	printf("The minimum value is %f\n", min);

	for (k = 1; k <= 9; k++)
	printf("The memory address of array value in index [%d] is :%p\n",k, slopes[k]);
	
}
