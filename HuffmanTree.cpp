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
//======================================

//create Huffman tree
for(int m=n;m<2*n-1;m++)    // load data to nomal node ('n' to last node )   
	{

	int min1,min2;     //the minimum weight of two of all the leaf nodes.
	    min1=min2=weight_MAX;	
	
	int leftNode,rightNode;   //confirm  the final left or right node  location
		leftNode=rightNode=-1;
	
	for(int i=0;i<m;i++)     //select minimum weight of two from leaf nodes and new node has no parent.
	{
		if(ht[i].parent==-1)    //choose the left/right child node from  node which has no parent
		{
			if(ht[i].weight<min1)    //send the current_data to right part,then recieve the less weight node
			{
				min2=min1;
				min1=ht[i].weight;
//				rightNode=leftNode;   //jesus!
				leftNode=i;
				
			}
			else 
			if(ht[i].weight<min2)     //min1 doesnt need the node that weight greater than itself. 
		//but the weight less than min2,so min2 will recieve this node_weight
			{
				min2=ht[i].weight;
				rightNode=i;
			}
			//if the weight greater than min1&min2,still choose two minimum weight,because the min1&min2 have return to 32767 
			
		}	
	}
	//========build a relationship between and childs============
	ht[m].weight=ht[leftNode].weight+ht[rightNode].weight;
	ht[m].LNode=leftNode;
	ht[m].RNode=rightNode;
	
	ht[leftNode].parent=m;
	ht[rightNode].parent=m;


	}	
}


int main()
{
	HTNode ht[MAX];
	
     
	ht[0].weight=1;
	ht[1].weight=3;
	ht[2].weight=5;
	ht[3].weight=7;
//    ht[4].weight=9;

	 
	createHT(ht,4);
	
	

	  for(int k=0;k<7;k++)
	  {
	  	cout<<ht[k].weight<<',';
	  }
	  
	  
	  
	  
	  
	return  0;
 } 
