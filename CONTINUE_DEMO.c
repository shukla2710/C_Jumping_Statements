#include<stdio.h>
main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		if(i==3)
			continue; //To skip the perticular block of code.
			
		printf(" %d",i);
	}
}
