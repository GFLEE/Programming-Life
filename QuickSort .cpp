#include <stdio.h>
#include <iostream>
using namespace std;
#define N 15 
int partition(int arr[],int low,int high) {
	int key=arr[low];
	while(low<high)         //low和high碰头为止 
	{
		while(low<high&&arr[high]>=key)      //high向前扫描直到有小于key的数为止 
		high--;
		if(low<high)                         //将这个数赋给arr[low],同时low向后移 
		{
			     arr[low++]=arr[high];
		}
		
		while(low<high&&arr[low]<=key)      //low向后扫描直到有大于key的数出现 
		low++;                               
		if(low<high)                         
		{
			arr[high--]=arr[low];           //把这个大于key的数赋给arr[high],同时high向前移位 
		}				
	}
	arr[low]=key;                           //此时low和high已经碰头，low==high，处于基准处，并返回这个位置 
	return low;
}
 
 int quicksort(int arr[],int start,int end)
 {
 	int pos;
 
 	if(start<end)
 	{
 		pos=partition(arr,start,end);
 		quicksort(arr,start,pos-1);   //留住每一个pos在数组中的位置；左右两个部分分别递归 
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
