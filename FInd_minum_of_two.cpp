#include "iostream"
using namespace std;
#define MAX 32767

int length(int *arr)
{
	int len=0;
	while(arr[len]!='\0'){
		len++;
	} 
	
	return len;
}

int main()
{
	int arr[]={23,3,3443,122,64,221,64,132,46};
	
	int min1=MAX;
	int min2=MAX;
	
	int loc1=-1;
	int loc2=-1;
	
	int len=length(arr);
	for(int i=0;i<len;i++)
	{
		if(arr[i]<min1)
		{
			loc2=loc1;
			loc1=i;
			min2=min1;
			min1=arr[i];
		}
		else if(arr[i]<min2)
		{
			loc2=i;
			min2=arr[i];
		}
		
	}
	cout<<"loc1:"<<loc1<<" loc2:"<<loc2<<endl;
	cout<<"min1= "<<min1<<','<<"min1= "<<min2<<endl;
	return 0;
}
