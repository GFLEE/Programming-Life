#include <iostream>  
using namespace std;  
int main()  
{     
   int num,cont=0,a=1;  
   cout<<"��������Ҫ�ƶ���������Ŀ��"<<endl;  
   cin>>num;   
   int val(int);   //��������   
     
   if(num==0){  
    cout<<"��������ֱ������0��"<<endl;  
    return -1;  
   }       
   else  
   cout<<"��Ҫ"<<val(num)<<"��"<<endl;   
   return 0;  
}     
   int val(int n){  
    int c;  
    if(n==1) c=1;  
    else c=2*val(n-1)+1;  
   }   
