#include <iostream>
using namespace std;
#define N 18
int partition(int arr[],int low,int high)
{

	int key=arr[low];
	while(low<high)
	{
		while(low<high&&arr[high]>=key)
	  high--;
	  if(low<high)
	  {
	  	arr[low++]=arr[high];
	  }
	  
	  
	  while(low<high&&arr[low]<=key)
	  low++;
      	
	 if(low<high)
	  {
	  	arr[high--]=arr[low];
	  }
	}
	arr[low]=key;
	return low;
}

int quicksort(int arr[],int start,int end)
{
	int pos;
	
	if(start<end)
	{
	pos=partition(arr,start,end);
	quicksort(arr,start,pos-1);
	quicksort(arr,pos+1,end);
  }
	
    return 0;
}
int main(void)
{
	int  arr[]={999,888,777,666,555,444,99,88,77,66,55,44,9,8,7,6,5,4};
	for(int i=0;i<N;i++)
	cout<<arr[i]<<"  ";
	quicksort(arr,0,17);
	
	cout<<"\n";
	
	
	for(int i=0;i<N;i++)
	cout<<arr[i]<<"  ";
	
	
	return 0;
}
