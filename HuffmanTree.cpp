#include "iostream"
using namespace std;
#include <stdio.h>
#define MAX 100
#define weight_MAX 32767

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
	int weight_init=1;            //create some leaf nodes,put leaf nodes range '0' to 'n-1',
                         	//and normal nodes range 'n' to '2n-2', obviously,ht[2n-1] is the rootNode.
	for(int i=0;i<5;i++)
	{
		ht[i].weight=weight_init;
		weight_init+=2;
	 }
//======================================

//create Huffman tree
for(int m=n;m<2*n-1;m++)    // load data to nomal node ('n' to last node )   
{

	int min1,min2;     //the minimum weight of two of all the leaf nodes.
	    min1=min2=weight_MAX;	
	
	int leftNode,rightNode;   //confirm  the final left or right node  location
		leftNode=rightNode=-1;
	
	for(int i=0;i<m;i++)     //select minimum weight of two from leaf nodes.
	{
		if(ht[i].parent=-1)
		{
			if(ht[i].weight<min1)
			{
				
			}
			else 
			if(ht[i].weight<min2)
			{
				
				
			}
			
		}
		
	}
	
	
	
	
	
	
	
}




	 

	
	
	
	
}
int main()
{
	HTNode ht[MAX];
	

	
	 
	createHT(ht,5);
	
	

	  
	  
	  
	  
	  
	  
	return  0;
 } 
