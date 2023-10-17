#include<stdio.h>
main()
{
	int num, i=1, sum=0;
	
	input:
		printf("\n\n Input a number : ");
		scanf("%d",&num);
		
		sum=sum+num;
		i++;
		
		if(i<=5)
			goto input;
		
		else
			printf("\n\n Sum = %d",sum);
}
