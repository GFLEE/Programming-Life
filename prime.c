#include <stdio.h>
void main(void)
{
	int i,k;
	for(i=2;i<=100;i++)
	{
		for(k=2;k<=i-1;k++)
		{
			if(i%k==0)
			break;
			
			if(k>=i)
			{
			printf("%d",i);
			 } 
       	}
	
}
	
	
	
	
	
} 
