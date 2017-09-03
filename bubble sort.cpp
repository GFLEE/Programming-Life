#include <iostream>
using namespace std;
int sort(int arr[])
{
	for(int j=0;j<9;j++)
	{
	   for(int n=0;n<9-1-j;n++)
	   {
	   	int m;
	   	if(arr[n]>arr[n+1])
	   	{
	   		m=arr[n];
	   		arr[n]=arr[n+1];
	   		arr[n+1]=m;
		   }

		} 
	
	} 
	
	return 0;
}
int main(void)
{
	int arr[]={23,1,12,45,76,89,101,234,104};
	
	for(int i=0;i<9;i++)
	{cout<<arr[i]<<" ";}
	
	cout<<"\n";
	sort(arr);
	
	for(int i=0;i<9;i++)
	{cout<<arr[i]<<" ";}
	
	return 0;
}
