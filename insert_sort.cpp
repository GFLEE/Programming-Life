#include <iostream>
using namespace std;
int sort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i;
		if(arr[i]<arr[i-1])
		{
			int temp=arr[i];
			while(j>=0&&arr[j-1]>temp)    //比待插入值大的数组元素依次后移，注意此时j就是插入的地方 
			{
				arr[j]=arr[j-1];
				j--;		
			}
			arr[j]=temp;               //插入 
		}	 
		return 0;
	}
}

int main(void)
{

	int arr[]={9,8,7,6,5,4,3,2,1,0};
	for(int i=0;i<10;i++)
	{cout<<arr[i]<<" ";}
	
	sort(arr,10);
	cout<<"\n";
	
	for(int i=0;i<10 ;i++)
	{cout<<arr[i]<<" ";}

	return 0;
}
