#include <iostream>
using namespace std;
int sort(int arr[],int n)
{
	for(int m=0;m<n-1;m++)
	{
		for(int j=m+1;j<n;j++)
		{
			if(arr[m]>arr[j])
			{
				int k=arr[m];
				   arr[m]=arr[j];
				   arr[j]=k;
			}	
		}
	}
	return 0;
}
int main(void)
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	for(int i=0;i<10;i++)
	cout<<arr[i]<<" ";
	
	sort(arr,10);
	cout<<"\n";
	for(int i=0;i<10;i++)
     cout<<arr[i]<<" ";	
	
	return 0;
}
