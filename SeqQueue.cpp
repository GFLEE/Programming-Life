#include "iostream"
using namespace std;
#include "stdlib.h"
#define null 0

#define maxsize 10

typedef struct queue
{
	int data[maxsize];
	int front, rear;
	
}SeqQueue;

//===========================function :create a circul Queue====================

 void createQueue(SeqQueue *&s)
 {
 	
 	s=(SeqQueue *)malloc(sizeof(SeqQueue));
 	s->front=0;
 	s->rear=0;
 	
 }

//==============================insert data into the sequence=============
 int insertQueue(SeqQueue *&s,int val)
 {
 	if((s->rear+1)%maxsize  == s->front)         //rear pointer plus 1,then meet front
 	{
 		cout<<"The Queue is full!"<<endl;
 		return 0;
	 }
	 else{
	 	s->rear++;
	 	s->data[s->rear]=val;
	 	return 1;
	 }
 		
 }
 
//====================pop data from the front====================
int popQueue(SeqQueue *&s)
{
	int temp;
   if(s->front==s->rear)
   {
   	  cout<<"The Queue is Empty!"<<endl;
   	  return 0;
	   }	
	else{
		  s->front++;
		  temp=s->data[s->front];
		  
		  cout<<"Pop : "<<temp<<"    "<<"front: "<<s->front<<endl;
		return temp;
	}
}
//===================================display a Queue======================
	int displayQueue(SeqQueue *&s)
	{
		 int flag=s->front+1;
		if(s->front==s->rear)
		{
			cout<<"The Queue is Empty!"<<endl;
			return 0;
		}
		else{
			
			while(flag<=s->rear)
			{
				
				cout<<s->data[flag]<<" ";
				 flag++;
			}
			
			cout<<endl;
			return 1;
		}
		
	}
//==================get Queue length==================================
int getLength(SeqQueue *&s)
{
	
     if(s->front==s->rear)
		{
			cout<<"The Queue is Empty!"<<endl;
			return 0;
		}
		else{
			int len=s->rear-s->front;
			cout<<"Queue length is: "<<len<<endl;
			return len;
			
		}
}
//==========================destroy a  Queue==========================
void destroyQueue(SeqQueue *&s)
{
	free(s);
}

//===================================================================
int main(void)
{
	SeqQueue *s;

    createQueue(s);
   for(int i=0;i<10;i++)
   {
   	  insertQueue(s,i);
   }
	displayQueue(s);
	getLength(s);
	popQueue(s);
	popQueue(s);
	popQueue(s);

	popQueue(s);

	
	return 0;
	
}
