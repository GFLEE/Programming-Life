#include <stdio.h>
#include <iostream>
using namespace std;
#define N 15 
int partition(int arr[],int low,int high) {
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
    int arr[N]={12,3,4,1,34,74,100,21,54,232,23,46,78,29,66};
	for(int h=0;h<N;h++)
	cout<<arr[h]<<"   ";
	cout<<"\n";
	
	quicksort(arr,0,N-1);
	
	
	for(int h=0;h<N;h++)
	cout<<arr[h]<<"   ";
	cout<<"\n";
	

 
 
 return 0;} 
