#include "iostream"
using namespace std;
#include <stdio.h>
#define MAX 100

typedef struct    //tree  Node stucture
{
	
	int data;
	int weight;
	int parent;
	int LNode;
	int RNode;

}HTNode;

void createHT(HTNode ht[],int n)
{
		for(int i=0;i<2*n-1;i++)     //all the tree nodes initiate
	{
		ht[i].parent=ht[i].LNode=ht[i].RNode=-1;
	}
//=====================================
	int weight_init=1;            //create some leaf nodes
	for(int i=0;i<5;i++)
	{
		ht[i].weight=weight_init;
		weight_init+=2;
	 }
//======================================






	 

	
	
	
	
}
int main()
{
	HTNode ht[MAX];
	

	
	 
	createHT(ht,5);
	
	

	  
	  
	  
	  
	  
	  
	return  0;
 } 
