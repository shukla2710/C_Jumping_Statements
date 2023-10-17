#include<stdio.h>
main()
{
	int num;
	
	printf("\n Enter a number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	 	goto even;
	 	
	else
		goto odd;
		
	even:
		printf("\n\n Entered number is even....");
		exit(0);
		
	odd:
		printf("\n\n Entered number is odd....");		 
		
}
