#include <iostream>
using namespace std;
int sum(int arr[],int n)
{
	if(n==0)
	return 0;
	else 
	{return sum(arr,n-1)+arr[n-1];
	}

}
int main(void)
{
	int i;
	int arr[]={1,2,3,5,0,2};

	while(i<6)
	{  cout<<arr[i]<<" ";
	   i++;
	}
	int plus=sum(arr,6);
	cout<<"\n"<<"sum= "<<plus;
	
	return 0;
}
