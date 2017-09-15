#include <iostream>  
using namespace std;  
int main()  
{     
   int num,cont=0,a=1;  
   cout<<"请输入需要移动的盘子数目："<<endl;  
   cin>>num;   
   int val(int);   //函数声明   
     
   if(num==0){  
    cout<<"输入的数字必须大于0！"<<endl;  
    return -1;  
   }       
   else  
   cout<<"需要"<<val(num)<<"次"<<endl;   
   return 0;  
}     
   int val(int n){  
    int c;  
    if(n==1) c=1;  
    else c=2*val(n-1)+1;  
   }   
