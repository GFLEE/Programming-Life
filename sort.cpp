#include "iostream"
using namespace std;

//=======================get aarray length===============
int length(int *arr)
{
	int len=0;
	while(arr[len]!='\0'){
		len++;
	} 
	
	return len;
}

int partition(int *arr)
{
	int midd;
	int len=length(arr);
	int i=0;int j=len-1;
	
	int sta=arr[3];
	while((i!=j)&&(j>0)&&i<len)
	{
		while(i!=j&&j>0)
		{
			if(arr[j]<sta)
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				break;
			}
			j--;
			
		};
		
		while(i!=j&&i<len)
		{
			if(arr[i]>sta)
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				break;
			}
			i++;
		
		}
		;
	}
	
	midd=i;
	
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<',';
	}
	cout<<endl; 
	cout<<midd;
	return midd;
	
}

int sort(int *arr,int start,int end)
{
	
	
	return 0;
}

int main()
{
	int arr[]={10,3,2,5,7,9,1,4,6,8};
	partition(arr);
	
	
	
	
	return 0;
}
