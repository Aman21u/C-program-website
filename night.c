#include<stdio.h>

void main()
{
	int j,k;
	int num[3][4]={1,12,121,122,22,13,54,51,65,45,54,35};
	
	printf("data stored in a variable is\n");
	for(j=0; j<3; j++)
	{
	for(k=0;k<3;k++)
	{
		printf("num[%d,%d]=%d\n",j,k,num[j][k]);
	}
	printf("\n");
	
	}
	
	
}
