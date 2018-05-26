#include "iostream"
using namespace std;
#include "stdlib.h"
#define null 0
#define Null 0

typedef struct LinkStack{
	
	int data;
    struct LinkStack *next;

}Stack;

//=================create a linkstack=======================

void createStack(Stack *&s)
{
	s=(Stack *)malloc(sizeof(Stack)); //the first node
    s->next=null;	
}

//================push a element to the stack=============
    int Push(Stack *&s,int val)
    { 
    	Stack *new_node;
    	
    	new_node=(Stack *)malloc(sizeof(Stack));
    	
    	new_node->data=val;
    	new_node->next=s->next;        //create a new node
    	
    	s->next=new_node;
//    	s=new_node;  we did not do this ,always make 's' ponit to the head node.....
//because first in l  ast out....always insert new node after head node
	}  
	//notice: in LinkList,insert after head node is similar with this!!!!!!!!
//=============Pop a val========================
  int  Pop(Stack *&s)
  {
  	 Stack *p;
  	  int temp;
  	  if(s->next==null)
  	  {
  	  	cout<<"Empty Stack!"<<endl;
		}
		else
		{
	  temp=s->next->data;
  	  cout<<"Pop: "<<temp<<endl;
  	  s->next=s->next->next;       //head node point to the third node 
  	  free(p);
  	  return temp;
		}
	  }	
//=====================display all============================

int displayStack(Stack *&s)
{
	Stack *p=s->next;     //use 'p' to Traversal the Stack
	int len=0;
	
	if(s->next==null)
	{
		cout<<"Empty stack!"<<endl;
		return 0;
	}
	else{
		
		while(p!=null)
		{
			int temp=p->data;
			 cout<<temp<<" ";
			 p=p->next;
			 len++;    // when a node traversaled finished, len+1
		}
		
	  cout<<endl<<"Stack Length is: "<<len<<endl;
	  return len;
		
	}
}


//===========================destroy Stack============================

	void destroyStack(Stack *s)
	{
		
		Stack *p=s->next;
		while(p!=null)
		{
		   free(s);
		   s=p;
		   p=p->next;	
		}
		
		free(s);
		
		cout<<"Stack Destroy finished."<<endl;
	}


//============================
int main()
{
    Stack *s;     //this pointer , we use it as the top pointer	
	createStack(s);
	
	for(int i=0;i<20;i++)
	{
		Push(s,i+1);
	}
	
	displayStack(s);
//	destroyStack(s);
//    displayStack(s);

	return 0;
}

