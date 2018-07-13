#include<stdio.h>
#define NUM 10
void main(void)
{

	/* Program has 3 arrays miles, gallons, mpg */
	/* Each array hold 10 elements */

	float miles[NUM] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float gallons[NUM] = {10.3, 15.6, 8.7, 14.0, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
	
	float *ml = miles, *gl = gallons;
	
	float mpg[NUM];
	
	int i;

	printf("Miles\tGallons\tMPG\n");
	printf("--------------------------------\n");
	for (i = 0; i < NUM; i++)
	{
	mpg[i] = *(ml + i) / *(gl + i);
	printf("%4.1f\t%3.1f\t%4.1f\n", *(ml + i), *(gl + i), mpg[i]);
	}


}
