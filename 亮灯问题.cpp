/*��100յ�ƺ�100�����أ��տ�ʼ��ʱ���ȫ����ģ�
��һ�ְ������п��أ����İ�һ�±�����İ�һ�±俪����
�ڶ��ָ�һ����һ�£�ż����������
�����ָ�2����3�ı�����������
���100��֮���ж���յ�������ģ�*/ 

//�²�
#include <iostream>
using namespace std;
int main(void)
{
	int arr[100]={0};  //��ʼ�� 
	 for(int i=0;i<100;i++)  //���� 
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
