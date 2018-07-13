#include<stdio.h>
void main(void)
{

	/* Program that stores values */
	/* Cop data stored in miles array to another array dist */
	/* Then displays the values in the dist array */


	int miles[7] = {15, 22, 16, 18, 27, 23, 20};
	int dist[7], *ml, i, j, k;

	ml = miles;
	for (i = 0; i< 7; i++)
	{
	dist[i] = *(ml + i);
	}

	printf("miles: ");
	for (j = 0; j < 7; j++)
	{
	printf("%d ", miles[j]);
	}

	printf("\nDist: ");
	
	for (k = 0; k < 7; k++)
	printf("%d ", dist[k]);

}
