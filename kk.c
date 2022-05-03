#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	int j;
    int num[4][3]={12,31,31,13,13,13,13,13,31,13,31,42,32,3};
    printf("data stored in a variable is \ n");
    for(i=0;i<5;i++)
    {
    	for(j=0;j<4;j++){
    		
    		
    		printf("num[%d][%d]=[%d] \n",i,j,num[i][j]);
		}
    	
    	
    	printf("\n");
	}
	
	
	
	
	return 0;
}
