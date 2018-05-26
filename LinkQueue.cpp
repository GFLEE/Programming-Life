#include "iostream"
using namespace std;
#include "stdlib.h"
#define null 0
typedef struct queueNode{          //A queue node ,include data and 'next poniter'
	int data;
	queueNode *next;
}QueueNode;

typedef struct queuePointer{     //
	QueueNode *front;      //front node  & rear node , contain  data and next node'address
	QueueNode *rear;
}Queue;


//==================================create a Link Queue====================
void initQueue(Queue *&L)
{
	L=(Queue *)malloc(sizeof(Queue));  //allocate space for the Queue
	
    //	L->front->next=null;
    //	L->rear->next=null;  do not do this ,because L->front hasn't initiate,so we can't use L->rear->next;
	//  At first,front and rear point to null;so the head node &tail node must be assign a node_value.
	L->front=null;
	L->rear=null;

//front node initiate:	
  QueueNode *s;  
  s=(QueueNode *)malloc(sizeof(QueueNode));
  s->next = null;
  L->front=s;
 
}
//===============================insert data into the Queue,================

 void insertQueue(Queue *&L,int val)
 {
 	 QueueNode *s;
 	 s=(QueueNode *)malloc(sizeof(QueueNode));
 	 
 	 s->data=val;          
 	 s->next=null;				 //create a new node;
 	 
 	 if(L->front->next==null)     //the queue is empty
 	 {
 	 	L->front->next=s;
 	 	L->rear=s;              //while queue is empty,assign front node &rear node  a node.
	  }
	else{
		
		L->rear->next=s;
		L->rear=s;		
	}
 	
 }

//========================display a LinkQueue===============================
//Queue structure:
// |front_node|*| -> ||data1|*| -> |data2|*| -> null
//                                     ^ 
// |rear_|*|---------------------------'  
	int displayQueue(Queue *&L)
	{
		int temp;    //save node_data temporary
		int len=0;      //Queue length
		QueueNode *p=L->front->next;   //make p point to the first data_node(after front_node)
	   if(L->front->next==null)
	   {
	   	  cout<<"The Queue is Empty!"<<endl;
	   	  return 0;
		   }	
		   else{
		   	cout<<"Queue data: ";
		   		while(p!=null)
		   		{
		   			temp=p->data;
		   			cout<<temp<<" ";
		   			len++;
		   			p=p->next;
		   			
				   }
		  	
		   	cout<<endl<<"Queue length is: "<<len<<endl;
		   	return 1;
		   }
		
	}

//==========================pop data from the Queue==========================

  int popQueue(Queue *&L)
  {
  	QueueNode *p=L->front->next;
  	int temp;
  	if(L->front==L->rear)
  	{
  		cout<<"The Queue is Empty!"<<endl;
  		return 0;
  		
	  }
	  else{
	  	temp=p->data;
	  	cout<<"Pop: "<<temp<<endl;
	  	L->front->next=p->next;
	  
	  	return temp;
	  }
  }

//==========================free a Queue=====================================

void destroyQueue(Queue *&L)
{
	QueueNode *p=L->front->next->next; //the secend data_node;
	QueueNode *q=L->front->next;
	free(L->front);
	free(L->rear);
	while(p!=null)
	{
		free(q);
		q=p;
		p=p->next;
	}
	free(q);
	free(L);
}
//===========================================================================
int main()
{
	Queue *L;
	initQueue(L);
   for(int i=0;i<10;i++)
   {
   		insertQueue(L,i);
	}	
	displayQueue(L);
destroyQueue(L);
displayQueue(L);

	return 0;
}
