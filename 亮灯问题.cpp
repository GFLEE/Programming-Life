/*有100盏灯和100个开关，刚开始的时候等全是灭的，
第一轮按下所有开关（开的按一下变灭，灭的按一下变开），
第二轮隔一个按一下（偶数个按），
第三轮隔2个（3的倍数个按），
求第100轮之后有多少盏灯是亮的？*/ 

//下策
#include <iostream>
using namespace std;
int main(void)
{
	int arr[100]={0};  //初始化 
	 for(int i=0;i<100;i++)  //轮数 
	 {
	 	int cir=i+1; 
	 	for(int m=0;m<100;m++)
	 	{
	 		if((m+1)%cir==0)
	 		{
	 			arr[m]=1;
	 			
			 }
	 		
		 }
	 	
	  } 
	  int count=0;
	for(int j=0;j<100;j++)
	{
		if(arr[j]==1)
		{
			count++;
		}
	}
	cout<<count<<"\n";
	
	return 0;
 } 
