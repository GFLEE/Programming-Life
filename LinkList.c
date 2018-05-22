#include "iostream"
using namespace std; 
//#include "stdio.h" 
#include "stdlib.h" 
#define  Null 0
#define null 0
                                                                                                                                                     
typedef struct LNode{

char data;
struct LNode *next;

}LinkList;      //define the struct ,LinkList is a  struct varaible

//======================creat LinkList=======================

   //insert before the head;
   
//void createLinkList(LinkList *&L,int a[],int n)
//{
//	LinkList *s;    //we will create a new node by using s;
//	
//	L=(LinkList *)malloc(sizeof(LinkList));
//	L->next=null;   //now we have created a head node
//	
//	 for(int i=0;i<n;i++)   //generate new node and add to the head node 
//	{
//	   s=(LinkList *)malloc(sizeof(LinkList)); //apply for space(one node)
//	   s->data = a[i];   //data
//	   s->next = L->next;
//	   L->next = s;
//	}
//}


//insert after the head

 void createLinkList(LinkList *&L,char a[],int n)
{
	LinkList *s;   //new node
	L=(LinkList *)malloc(sizeof(LinkList));
	L->next=null;   //create a head node
	
	LinkList *p=L;   //point to the new node
	
	for(int i=0;i<n;i++)
	{
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = a[i];
		s->next = null;
		p->next = s;
		p=p->next;
		
	}	
}

//===========================================================

//=========================empty LinkList===================

int isEmpty(LinkList *&L)
{
	
	if(L->next==null){
		return 1;
	}
	else {
		return 0;
	}
	
}

//==========================================================
//=====================display LinkList=======================

void displayLinkList(LinkList *&L)
{
	LinkList *p=L->next;
	if(isEmpty(L))
	{
		cout<<"This a empty LinkList!";
	}
	else{
	while(p!=null)       //mark 1
	{
		char element = p->data;
		cout<<element<<' ';
		p=p->next;
	}
}
cout<<endl;
}

//==========================================================
//========================get LinkList Length===============

int getLength(LinkList *&L)
{
	int len=0;
	LinkList *p = L->next;
	while(p!=null)
	{
		len++;
		p=p->next;
	}
	
	return len;
}


//==========================================================

//========================restore the  link List===========
void initLinkList(LinkList *&L){

	
	L=(LinkList *)malloc(sizeof(LinkList));
	
	L->next=null;
}


//========================================================
//=======================free a LinkList=================

void destroyLinkList(LinkList *&L)
{
	LinkList *p=L;
	LinkList *q=p->next;
	while(q!=null)
	{
		free(p);
		p=q;          //q submit the current address to p(next address will be freed ),and point to the next
		q=q->next;
	}	
	free(p);     //at last, the loop stoped , and p points to the last node,free it ,done
	
}

//=============================locate the  'n'th node==========
char locateNode(LinkList *&L,int loc)
{
	LinkList *p=L;
	int flag=0;
	char ch;
//	LinkList *q;
	int len=getLength(L);
	if((loc<1)||(loc>len))
	{
		cout<<"Your location number is not right!";
		return 0;
	}
	else{
		
//		p=p+loc;
//		ch=p->data;
////		q=p+loc;
////		ch=q->data;
//		return ch;        // notice : the space is not continue,so we can not use this

      while((p!=null)&&(flag<loc))
	  {
	  	flag++;
	  	p=p->next;
	  	
	  };
	  ch=p->data;   //update the value
	  return ch;  
	}

 } 

//=======================================================

//===========================add a node in LinkList======

void insertNode(LinkList *&L,int loc,char value)
{
	LinkList *p=L;
	LinkList *s;
	LinkList *q;
	int flag=0;
	int len=getLength(L);
	s=(LinkList *)malloc(sizeof(LinkList)); //create a new node
	s->data=value;
	s->next=null;
	if((loc<1)||(loc>len))    //over the property range
	{
		cout<<"Wrong Location!"<<endl;
	
	}
	else {
		while(p!=null&&flag<loc-1)    //find the 'i-1' locatioon
	{
		flag++;
		p=p->next;
	};
		
	q=p->next;           //insert opretion
	p->next = s;
	s->next=q;
	}
	
}

//======================================================= 

//=======================delete Node======================

void deleteNode(LinkList *&L ,int loc)
{
	
	LinkList *p=L;
	LinkList *q;
	int flag=0;
	int len=getLength(L);
	if((loc<1)||(loc>len))    //over the list range
	{
		cout<<"Wrong Location!"<<endl;
	
	}
	else{
		
		while(p!=null&&flag<loc-1)
		{
			flag++;
			p=p->next;
		}
		
	 q=p->next->next;
	 p->next=q;
	 p=p->next;
//	 free(p);   mark2:	
		
	}	
}

//=====================query a data value wheather in the LinkList================
void queryValue(LinkList *&L,char val){	
	LinkList *p=L->next;
	int loc=1;
	char ch;
	int flag=0;
	while(p!=null)
	{
		ch=p->data;
		if(ch==val)
		{
		   flag=1;
		   break;	
		}
		else
		{
			flag=0;
			p=p->next;
			loc++;		
			}
	}	
flag==1?cout<<"Found the node_value '"<<val<<"' at position: "<<loc<<endl:cout<<"Didn't Found '"<<val<<"' in the LinkList!"<<endl;
	
}
//================================================================================
//============================Node value change===================================

void changeValue(LinkList *&L,int loc,char ch){
	
	LinkList *p=L->next;
	int len=getLength(L);
	int flag=1;
     if(loc<1||loc>len)
     {
     	cout<<"Your location is wrong!"<<endl;
	 }
	 else{
		while(p!=null&&flag<loc)    //p points to  the 'loc'th node
		{
			flag++;
			p=p->next;	
		}
		p->data=ch;	
	 }	
}

//================================================================================
int main(){
 
 int a=10;
 LinkList *L;
 char arr[10]={'a','b','c','d','e','f','g','h','i','j'};
 
 createLinkList(L,arr,10);
 
  displayLinkList(L);

   cout<<endl;
 
 char now=locateNode(L,5);
 cout<<now<<endl;
 

   insertNode(L,10,'r');
   displayLinkList(L);
   
cout<<endl;
 deleteNode(L,10);
 displayLinkList(L);

cout<<endl;
queryValue(L,'m');

cout<<endl;
changeValue(L,5,'Z');
 displayLinkList(L);



return 0;


}
