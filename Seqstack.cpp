#include "iostream"
using namespace std;
#include "stdlib.h"

#define maxsize 10
	typedef struct stack{
		
		int data[maxsize];
		int top;
		
	}Stack;
//===============init a stack==========
void initStack(Stack *&s)
{
	s=(Stack *)malloc(sizeof(Stack));
	s->top=-1;
}

//==============push()===============

int push(Stack *&s,int val)
{
	if(s->top==maxsize-1)
	{
		cout<<"The stack is up overflow! Can't write more!"<<endl;
		return 0;
	}
	else{
		s->top++;
//		cout<<s->top<<' ';      test 'top'
		s->data[s->top]=val;
		return 1;
	}
	
}

//====================================
//==========pop operation=============
int pop(Stack *&s)     //
{
	if(s->top==-1)
	{
		cout<<"Down overflow occured!"<<endl;
		return 0;
		
	}
	else{
		
		int temp;
		temp=s->data[s->top];
		s->top--;
	    cout<<temp<<endl;
	 	return temp;	
	}
	
}
//========================destory a array stack============
   void destroyStack(Stack *&s)
   {
   	free(s);
   }
   
//========================dispay a stack============

	 void 	displayStack(Stack *&s)
	 {
	 	
	 	int pointer=s->top;
	 	while(pointer!=-1)
	 	{
	 		
	 		cout<<s->data[pointer]<<" ";
	 		pointer--;
		 }
		 cout<<endl<<endl;
	 }

//===================return lenth of the stack===========
  int getLength(Stack *s)
  {
  	
  	  int len;
  	  len=(s->top)+1;

  	  cout<<"Stack length is: "<<len<<endl;
  	  return len;
  }

//===========is empty===========================
  void isEmpty(Stack *&s)
  {
  	if(s->top==-1)
  	{
  		cout<<"Empty stack!"<<endl;
	  }
	  else
	  {
	  	cout<<"Stack is Not Empty."<<endl<<endl;
	  }
  }
//==============================================

//====================Algortham================

  // write a function, test the string wheather a symmetrical string , try to use Stack to solve it.
  
  //because the data is 'int',so I define a number array to replace it;
   void symmetry(int *str)
  {
  	   Stack *p;
  	   initStack(p);
  	   int flag;
  	   
  	   for(int i=0;i<7;i++)
  	   {
  	   	push(p,str[i]);
		 }
		 displayStack(p);
		 int m=0;
	 
	   	
	   	while(p->top!=-1)
	   	{
	   		
	   		int temp=pop(p);
	   	   if(temp==str[m])
			  {
			  	flag=1;
				  }	
				  else{
				  flag=0;
				  break;
				  }
				m++;
		   
	   }
	   flag?cout<<"It is a symmetrical string."<<endl:cout<<"Not a symmetrical string."<<endl;
  	
  }
  


//============================================
int main(){
	
	Stack *s;
	initStack(s);
	for(int i=0;i<12;i++)
	{
		push(s,i);
	}
	displayStack(s);
    isEmpty(s);
	
	int strings[]={5,2,3,4,3,2,1};
	symmetry(strings);
	
	
	
	return 0;      //2018.5.24
	
}
