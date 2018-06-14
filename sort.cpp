#include "iostream"
using namespace std;

//=======================get aarray length===============


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
	
	int mid;
	
	
	if(start<end)
	{
		mid=partition(arr,start,end);
		
		sort(arr,start,mid-1);
		sort(arr,mid+1,end);
	
	}
	
	
	return 0;
}

int main()
{
	int arr[]={10,3,2,5,7,9,19,4,11,8,1,2,3,4,5,21,121,42,24,867,65,23,23412,44,56,7656,34};
	
      
       
	
	
	
////	
	sort(arr,0,26);
	for(int i=0;i<25;i++)
	cout<<arr[i]<<' ';





	
	
	return 0;
}
