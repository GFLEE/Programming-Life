#include <iostream>
using namespace std;
int main(void)
{
	
	for(int i=2;i<=100;i++)
	{
		for(int k=2;k<=i-1;k++)
		{
			if(i%k==0)
			break;
			
			if(k>=i)
			{
			cout<<i<<" ";
			 } 
       	}
	
}
	
	
	
	
	return 0;
} 
