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

int partition(int *arr,int start,int end)
{
	int low=start;
	int high=end;
	int mid;
	
	while(low<high)
	{
		while(low<high&&(arr[high]>arr[low]))
		{
			high--;
		}
		
		if(arr[high]<arr[low])
		{
			
			int temp;
			temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			
		}
	
//==========================================================================
			while(low<high&&(arr[low]<arr[high]))
		{
			low++;
		}
		
		if(arr[high]<arr[low])
		{
			
			int temp;
			temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			
			
		}
	
	}
	
	mid=low;
	cout<<mid<<endl;
	mid=high;
	cout<<mid<<endl;
return mid;
	
}

int sort(int *arr,int start,int end)
{
	
	
	
	
	while(start<end)
	{
		
	   key=partition(arr,0,key-1);
		
		partition(arr,key+1,end);
		
	}
	
	
	return 0;
}

int main()
{
	int arr[]={10,3,2,5,7,9,19,4,11,8};
	partition(arr,0,9);
//	
	for(int i=0;i<10;i++)
	cout<<arr[i]<<' ';





	
	
	return 0;
}
