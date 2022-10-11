#include<stdio.h>
 
int main()
{
  	int i, number;
 
  	printf("\n Please Enter the Maximum Limit Value :  ")                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ;
  	scanf("%d", &number);
  
  	printf("\n even Numbers between 1 and %d are : \n", number);
  	for(i = 2; i <= number; i++)
  	{
    	if ( i % 2 != 0) 
    	{
  			printf(" %d\t", i);
    	}
  	}
 
  	return 0;
}
